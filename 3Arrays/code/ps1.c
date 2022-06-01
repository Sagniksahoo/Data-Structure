//Max(),min(),Search(num),Insert(num),Append(num) code the operations in c language by using array adt using structures
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
struct node
{
    int num;
    struct node *next;
};
struct node *head=NULL;
struct node *tail=NULL;
void Append(int num)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->num=num;
    newnode->next=NULL; 
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else
    {
        tail->next=newnode;
        tail=newnode;
    }
}
void Insert(int num)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->num=num;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else
    {
        newnode->next=head;
        head=newnode;
    }
}
void Search(int num)
{
    struct node *temp=head;

    while(temp!=NULL)
    {
        if(temp->num==num)
        {
            printf("\n%d is found",num);
            return;
        }
        temp=temp->next;
    }
    printf("\n%d is not found",num);
}
void Max()
{
    struct node *temp=head;

    int max=temp->num;
    while(temp!=NULL)
    {
        if(temp->num>max)
        {
            max=temp->num;
        }
        temp=temp->next;
    }
    printf("\n%d is the maximum number",max);
}
void Min()
{
    struct node *temp=head;

    int min=temp->num;
    while(temp!=NULL)
    {
        if(temp->num<min)
        {
            min=temp->num;
        }
        temp=temp->next;
    }
    printf("\n%d is the minimum number",min);
}
void Display()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("\n%d",temp->num);
        temp=temp->next;
    }
    

