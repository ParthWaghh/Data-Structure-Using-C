#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define V 5
struct node
{
    int data;
    struct node *link;
};
void addEdge(struct node *arr[],int src,int dest)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=dest;
    temp->link=arr[src];
    arr[src]=temp;
}
void display(struct node *arr[],int v)
{
    int i;
    struct node *temp;
    for(i=0;i<v;i++)
    {
        temp=arr[i];
        printf("\n vertex %d",i);
        while(temp!=NULL)
        {
            printf("%d ->",temp->data);
            temp=temp->link;
        }
    }
}
int main()
{
    struct node *arr[V]={NULL};
    addEdge(arr,0,1);
    addEdge(arr,0,2);
    addEdge(arr,1,3);
    addEdge(arr,2,4);
    display(arr,V);
    return 0;
}
/* OUTPUT :  vertex 02 ->1 ->
 vertex 13 ->
 vertex 24 ->
 vertex 3
 vertex 4 */

