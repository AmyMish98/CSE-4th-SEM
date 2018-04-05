//PROGRAM FOR IN-ORDER, PRE-ORDER AND POST-ORDER TRAVERSAL OF A BINARY TREE USING TRAVERSAL

#include<stdio.h>
#include<stdlib.h>

typedef struct BST
{
    int data;
    struct BST *left;
    struct BST *right;
}node;

node *create();
void insert(node *,node *);
void preorder(node *);
void inorder(node *);
void postorder(node *t);

int main()
{
    char ch;
    node *root=NULL,*temp;

    do
    {
        temp=create();
        if(root==NULL)
            root=temp;
        else
            insert(root,temp);

        printf("\n Do you want to enter more(y/n)? ");
        getchar();
        scanf("%c",&ch);
    }while(ch=='y'|ch=='Y');

    printf("\n Preorder Traversal: ");
    preorder(root);
    printf("\n Inorder Traversal: ");
    inorder(root);
    printf("\n Postorder Traversal: ");
    postorder(root);
    return 0;
}

node *create()
{
    node *temp;
    printf("\n Enter data: ");
    temp=(node*)malloc(sizeof(node));
    scanf("%d",&temp->data);
    temp->left=temp->right=NULL;
    return temp;
}

void insert(node *root,node *temp)
{
    if(temp->data<root->data)
    {
        if(root->left!=NULL)
            insert(root->left,temp);
        else
            root->left=temp;
    }

    if(temp->data>root->data)
    {
        if(root->right!=NULL)
            insert(root->right,temp);
        else
            root->right=temp;
    }
}

void preorder(node *root)
{
    if(root!=NULL)
    {
        printf("%d -> ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(struct BST *t)
{
    if (t == NULL)
    {
        printf("No elements in a tree to display");
        return;
    }
    if (t->left != NULL)
        inorder(t->left);
    printf("%d -> ", t->data);
    if (t->right != NULL)
        inorder(t->right);
}

void postorder(struct BST *t)
{
    if (t == NULL)
    {
        printf("No elements in a tree to display ");
        return;
    }
    if (t->left != NULL)
        postorder(t->left);
    if (t->right != NULL)
        postorder(t->right);
    printf("%d -> ", t->data);
}
