#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
    struct node *right;
    int data;
    struct node *left;
};
void insertNode(struct node **link,int data)
{
    struct node *temp;
    if(*link==NULL)
    {
        temp=(struct node *)malloc(sizeof(struct node));
        temp->data=data;
        temp->left=NULL;
        temp->right=NULL;
        printf("\n the data is %d",(*link)->data);
    }
    else
    {
        if(data<((*link)->data))
        {
          insertNode(&(*link)->left,data);
          printf("\n the data on the left node is : %d",(*link)->data);
        }
        else
        {
            insertNode(&(*link)->right,data);
            printf("\n the data on the right node is : %d",(*link)->data);
        }
    }
}
void search(struct node *link,int num)
{
    if(num==link->data)
    {
        printf("\n the num is at the root node");
    }
    else if(num>link->data)
    {
        printf("\n The num is at the right node");
    }
    else if(num<link->data)
    {
        printf("num is at the left node");
    }
    else
    {
        printf("\n num not found");
    }
}
int main()
{
    struct node *link = NULL;
    
    insertNode(&link,34);
    insertNode(&link,23);
    insertNode(&link,12);
    
    search(link,12);
    
    return 0;
}
// Not Running 
