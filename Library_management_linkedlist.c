#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *h1, *h2, *h3;

void insert(struct node *p, int n)
{
    struct node *tp;
    tp = (struct node *)malloc(sizeof(struct node));

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = tp;
    tp->data = n;
    tp->next = NULL;
}

void delete (struct node *p)
{
    struct node *tp1;
    while (p->next != NULL)
    {
        tp1 = p;
        p = p->next;
    }
    tp1->next = NULL;
    free(p);
}

void display(struct node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

int count(struct node *p)
{
    int c1;
    while (p != NULL)
    {
        c1++;
        p = p->next;
    }
    return c1-1;
}

void inserter(struct node *p, int n, int t)
{
    while (p->next != NULL)
    {
        p = p->next;
    }
    for (int i = 0; i < t; i++)
    {
        insert(p, n);
    }
}

void list(){

            printf("\nLIST OF AVAILABLE BOOKS:\n\n");
            printf("1.Data Structures and Algorithms: %d\n", count(h1));
            printf("2.Discrete Mathematics: %d\n", count(h2));
            printf("3.Advanced JAVA programming: %d\n", count(h3));
}

int main()
{
    h1 = (struct node *)malloc(sizeof(struct node));
    h1->data = 1;
    h1->next = NULL;

    h2 = (struct node *)malloc(sizeof(struct node));
    h2->data = 2;
    h2->next = NULL;

    h3 = (struct node *)malloc(sizeof(struct node));
    h3->data = 3;
    h3->next = NULL;

    inserter(h1, 1, 5);
    inserter(h2, 2, 5);
    inserter(h3, 3, 5);


    int x=-1;
    while(x<0)
    {
        int c;

        printf("\n********************* WELCOME TO THE LIBRARY *****************\n");

        printf("Please select an option:\n");
        printf("1. Issue a book\n");
        printf("2. Return a Book\n");
        scanf("%d",&c);

        switch (c){

        case 1:
            list();
            int c2;

            printf("\nwhich book do you want to issue:");
            scanf("%d",&c2);

            switch(c2){
                case 1:
                if(count(h1)>0){
                    delete(h1);
                    printf("\nthank You For issuing. Please return the book within a month\n");
                }

                else printf("book not available right now!! Try again later\n");
                
                break;

                case 2:
                if(count(h2)>0){
                    delete(h2);
                    printf("\nthank You For issuing. Please return the book within a month\n");
                }

                else printf("book not available right now!! Try again later\n");
                break;

                case 3:
                if(count(h3)>0){
                    delete(h3);
                    printf("\nthank You For issuing. Please return the book within a month\n");
                }

                else printf("book not available right now!! Try again later\n");
                break;
            }
            break;

    case 2:

            list();
            int c3;
            printf("Which book do you want to return:\n");
            scanf("%d",&c3);

            switch(c3){
                case 1:
                if(count(h1)==5){
                    printf("You have not issued the book from the library\n");
                }
                else{
                    insert(h1,1);
                    printf("the book has been returned. Thank you!\n");
                }
                break;

                case 2:
                if(count(h2)==5){
                    printf("You have not issued the book from the library\n");
                }
                else{
                    insert(h2,2);
                    printf("the book has been returned. Thank you!\n");
                }
                break;

                case 3:
                if(count(h3)==5){
                    printf("You have not issued the book from the library\n");
                }
                else{
                    insert(h3,3);
                    printf("the book has been returned. Thank you!\n");
                }
                break;

            }
            break;

        }
      
    }
      return 0;
}