//                                                  *****MONEY_EXCHANGE_MACHINE*****

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// structure of stack 
struct stack
{
    int top;
    int *arr;
}s1,s2,s5,s10; 


// creating coin stacks using function
struct stack* create_stack(struct stack *ptr){
    ptr->top=-1;
    ptr->arr=(int*)malloc(30*sizeof(int));
    return ptr;
}

// to check if stack is empty
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
        return 0;
}

// to check if stack is full
int isFull(struct stack *ptr)
{
   
    if (ptr->top ==29)
    
    {
        return 1;
    }
    else{
        return 0;
    }
}

//removes the topmost element of stack
int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("\nNo more coins available to dispense!!\n");
    }
    else
    {
        return ptr->arr[ptr->top--];
        
    }
}

//pushes the given element on the top of the stack
void push(struct stack *ptr, int a)
{
    if (isFull(ptr))
    {
        printf("\nCoin tray is full!!\n",a);
    }
    
    else
    {
        ptr->arr[++ptr->top] = a;
    }
}

// to insert the given element in stack n times (admin function)
void pusher(struct stack *ptr,int a,int n)
{
    for(int i=0;i<n;i++)
    {
    push(ptr,a);   
    }
}

// to remove the element in user as well as admin n times
void popper(struct stack*ptr,int n)
    {
        for(int i=0;i<n;i++)
        {
            printf("%d ",pop(ptr));
        }
    }
// Main function

int main()
{
    
    //created stacks for one rupee coin 
    create_stack(&s1);
    pusher(&s1,1,30);

    //created stacks for two rupee coin
    create_stack(&s2);
    pusher(&s2,2,30);

    //created stacks for five rupee coin
    create_stack(&s5);
    pusher(&s5,5,30);

    //created stacks for ten rupee coin
    create_stack(&s10);
    pusher(&s10,10,30);

    int x=-1;
    while(x<0){
    int l;
    //login choice
    printf("\n\n***************************************Welcome to the money exchange machine!**********************************\n");
    printf("Please select login option:\n");
    printf("1.Admin\n");
    printf("2.User\n");
    printf("3.quit\n");
    printf("Enter choice:");
    
    scanf("%d",&l);
        if(l==1)// If user enters 1 he/she chooses to login as admin and below are the procedures
                // for admin to add or remove coins from the stack
        {
        char pass[5]="2412";
        char p1[5];
        printf("Please enter 4 digit password: ");
        scanf("%s",p1);
        int val=strcmp(pass,p1);  // Validating the password entered by user 
        if(val==0)
        {
            printf("\nWelcome Admin\n");
            printf("select an option:\n");
            printf("1.Add coins\n");
            printf("2.Remove coins\n");
            
            int c;
            printf("choice: ");
            scanf("%d",&c);
            switch(c)
            {
                case 1:
                printf("which coins do you want to add?:\n"); //options to add coins
                printf("1. 1 Rupee\n");
                printf("2. 2 Rupee\n");
                printf("3. 5 Rupee\n");
                printf("4. 10 Rupee\n");
                

                int c1;
                printf("selection:");
                scanf("%d",&c1);
                
                switch(c1)
                {
                    case 1:
                    int n1;
                    printf("\nCurrent number of coins: %d\n",(s1.top)+1); //displays current number of coins
                    printf("how many coins do you want to add: ");
                    scanf("%d",&n1);
                    if(n1+s1.top+1>30){
                        printf("MAX coins are 30");
                        break;
                    }
                    else{
                    pusher(&s1,1,n1);
                    printf("%d coins have been added",n1);
                    break;
                    }
                    

                    case 2:
                    int n2;
                    printf("\nCurrent number of coins: %d\n",(s2.top)+1);
                    printf("how many coins do you want to add: ");
                    scanf("%d",&n2);
                    if(n2+s2.top+1>30){
                        printf("MAX coins are 30");
                        break;
                    }
                    else{
                    pusher(&s2,2,n2);
                    printf("%d coins have been added",n2);
                    break;
                    }
                    

                    case 3:
                    int n3;
                    printf("\nCurrent number of coins: %d\n",(s5.top)+1);
                    printf("how many coins do you want to add: ");
                    scanf("%d",&n3);
                    if(n3+s5.top+1>30){
                        printf("MAX coins are 30");
                        break;
                    }
                    else{
                    pusher(&s5,5,n3);
                    printf("%d coins have been added",n3);
                    break;
                    }

                    case 4:
                    int n4;
                    printf("\nCurrent number of coins: %d\n",(s10.top)+1);
                    printf("how many coins do you want to add: ");
                    scanf("%d",&n4);
                    if(n4+s10.top+1>30){
                        printf("MAX coins are 30");
                    }
                    else{
                    pusher(&s10,10,n4);
                    printf("%d coins have been added",n4);
                    break;
                    }
                    
                }
                break;

                case 2: //for removing coins from the coin tray
                printf("\nwhich coins do you want to remove:\n");
                printf("1. 1 Rupee\n");
                printf("2. 2 Rupee\n");
                printf("3. 5 Rupee\n");
                printf("4. 10 Rupee\n");
                
                int c2;
                printf("selection:");
                scanf("%d",&c2);

                switch(c2)
                {
                    case 1:
                    int k1;
                    printf("\nCurrent number of coins: %d\n",(s1.top)+1);
                    printf("how many coins do you want to remove: ");
                    scanf("%d",&k1);
                    popper(&s1,k1);
                    printf("\n%d coins have been removed",k1);
                    break;

                    case 2:
                    int k2;
                    printf("\nCurrent number of coins: %d\n",(s2.top)+1);
                    printf("how many coins do you want to remove: ");
                    scanf("%d",&k2);
                    popper(&s2,k2);
                    printf("\n%d coins have been removed",k2);
                    break;

                    case 3:
                    int k3;
                    printf("\nCurrent number of coins: %d\n",(s5.top)+1);
                    printf("how many coins do you want to remove: ");
                    scanf("%d",&k3);
                    popper(&s5,k3);
                    printf("\n%d coins have been removed",k3);
                    break;

                    case 4:
                    int k4;
                    printf("\nCurrent number of coins: %d\n",(s10.top)+1);
                    printf("how many coins do you want to remove: ");
                    scanf("%d",&k4);
                    popper(&s10,k4);
                    printf("\n%d coins have been added",k4);
                    break;
                }
                break;

            }
        }
        else
        {
            printf("\nWrong Password!!\n");
            break;
        }
    }

    else if(l==2) // If entered choice is 2, you will be logging in as a user
    {
        int amount;
        printf("please deposit the amount:");  // Asking user to enter amount to be deposited
        scanf("%d",&amount);
        if(amount>30){
            printf("cannot convert more than 30");
            goto end;
        }
        else
        {

        printf("\nWhich denomination do you want?\n");
        printf("1. Coins of 1\n");
        printf("2. Coins of 2\n");
        printf("3. Coins of 5\n");
        printf("4. Coins of 10\n");
        

        int choice;
        printf("select option: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("\nplease collect your change!\n");
            popper(&s1,amount);
            break;

            case 2:
            printf("\nplease collect your change!\n");
            if(amount%2==0){
            popper(&s2,amount/2);
            break;
            }
            else{
                popper(&s2,(amount/2));
                popper(&s1,1);
                break;
            }

            case 3:
            printf("\nplease collect your change!\n");
            if(amount%5==0){
                popper(&s5,amount/5);
                break;
            }
            else{
                if(isEmpty(&s1))
                {
                    if(isEmpty(&s2)){
                    }
                    else{
                        if(amount%2==0){
                        popper(&s2,amount/2);
                        }
                        else{
                            popper(&s2,(amount/2)+1);
                        }
                    }
                }
                else
                {
                    popper(&s1,amount%5);
                }
            }

            case 4:
            printf("\nplease collect your change!!\n");
            if(amount%10==0)
            {
                popper(&s10,amount/10);
                break;
            }
            else{
                popper(&s10,amount/10);
                if(amount%2==0)
                {
                    popper(&s2,(amount%10)/2);
                    break;
                }
                else if(amount%5==0)
                {
                    popper(&s5,(amount%10)/5);
                    break;
                }
                
                else
                {
                    popper(&s1,amount%10);
                    break;
                }
            }     
    }
    }

}
else if(l==3){
    goto end;
}
}
  end:
        
    return 0;
}