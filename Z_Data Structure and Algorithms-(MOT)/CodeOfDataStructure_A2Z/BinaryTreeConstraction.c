#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
struct list
{
    char data;
    struct list *left, *right;
};
typedef struct list node;
void bTree(node *root);
void preorder(node *root);
void postorder(node *root);
void inorder(node *root);
void main()
{
    node *root;
    root=(node*)malloc(sizeof(node));
    fflush(stdout);
    printf("Enter the data for Root node: ");
    fflush(stdin);
    root->data = toupper(getchar());
    root->left=NULL;
    root->right = NULL;
    bTree(root);
    printf("\nPreorder: ");
    preorder(root);
    printf("\nPostorder: ");
    postorder(root);
    printf("\nInorder: ");
    inorder(root);
}
void bTree(node *root)
{
    node *l, *r;
    char ans;
    fflush(stdout);
    printf("Do you want to create left child of %c: ",root->data);
    fflush(stdin);
    ans=toupper(getchar());
    if(ans=='Y')
    {
        l =(node*)malloc(sizeof(node));
        fflush(stdout);
        printf("Enter data: ");
        fflush(stdin);
        l->data = toupper(getchar());
        l->left = NULL;
        l->right=NULL;
        root->left = l;
        bTree(l);
    }
    fflush(stdout);
    printf("Do you want to create right  child of %c : ",root->data);
    fflush(stdin);
    ans=toupper(getchar());
    if(ans=='Y')
    {
        r=(node*)malloc(sizeof(node));
        fflush(stdout);
        printf("Enter data: ");
        fflush(stdin);
        r->data = toupper(getchar());
        r->left = NULL;
        r->right=NULL;
        root->right = r;
        bTree(r);
    }
}
void preorder(node *root)
{
    if(root==NULL)
        return;
    printf("%c ",root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(node *root)
{
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%c ",root->data);
}
void inorder(node *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    printf("%c ",root->data);
    inorder(root->right);
}
