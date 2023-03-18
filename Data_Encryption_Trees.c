#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// A function to create a node
struct node *newNode(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    temp->data = data;
    temp->left = temp->right = NULL;

    return temp;
}

struct node *constructTreeUtil(int pre[], int *preIndex, int low, int high, int size)
{

    if (*preIndex >= size || low > high)
        return NULL;

    // The first node in preorder traversal is root. So take
    // the node at preIndex from pre[] and make it root, and
    // increment preIndex
    struct node *root = newNode(pre[*preIndex]);
    *preIndex = *preIndex + 1;
    if (low == high)
        return root;

    // Search for the first element greater than root
    int i;
    for (i = low; i <= high; ++i)
        if (pre[i] > root->data)
            break;

    // Use the index of element found in preorder to divide
    // preorder array in two parts. Left subtree and right
    // subtree
    root->left = constructTreeUtil(pre, preIndex, *preIndex, i - 1, size);
    root->right = constructTreeUtil(pre, preIndex, i, high, size);

    return root;
}

void input(char s[])
{
    FILE *fptr;
    int i;
    char d[100];

    fptr = fopen(s, "w");

    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }

    printf("Enter data: ");
    fgets(d, 100, stdin);

    for (i = 0; i < d[i]; i++)
        fputc(d[i], fptr);
    fclose(fptr);
}

// The main function to construct BST from given preorder
// traversal. This function mainly uses constructTreeUtil()
struct node *constructTree(int pre[], int size)
{
    int preIndex = 0;
    return constructTreeUtil(pre, &preIndex, 0, size - 1,
                             size);
}

// A function to print inorder traversal of a Binary
// Tree
void printInorder(struct node *node)
{
    if (node == NULL)
        return;
    printInorder(node->left);
    printf("%c ", node->data);
    printInorder(node->right);
}

int main()
{
    FILE *fptr;
    char fname[50];
    printf("Enter file name: ");
    gets(fname);
    input(fname);
    int array[1000];
    int i = 0;
    // char tmp[100000], *pEnd;
    char tmp[1000];
    fptr = fopen(fname, "r+");
    // while (fscanf(fptr,"%s",tmp) > 0)
    // {
    //     //if( !(array[i] = strtol(tmp, &pEnd,10)))
    //      array[i] = tmp[0];
    //     i++;
    // }
    if (fptr != NULL)
    {
        while (fgets(array, 1000, fptr))
        {
            tmp[i] = (int)array[i];
            i++;
        }
    }
    int size = sizeof(tmp) / sizeof(tmp[0]);
    struct node *root = constructTree(array,strlen(array));

    printf("Below is Encrypted Data from your file: \n");
    printInorder(root);

    printf("\nEnter a password to Decrypt your Data: ");
    int pass;
    scanf("%d", &pass);
    if (pass == 1234)
    {
        fptr = fopen(fname, "r");
        char content[1000];
        if (fptr != NULL)
        {
            while (fgets(content, 1000, fptr))
            {
                printf("%s", content);
            }
        }
        else
        {
            printf("error while opening file !");
        }
        fclose(fptr);
    }

    else
    {
        printf("Please Enter Correct Password");
    }

    return 0;
}