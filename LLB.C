#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node* ie(struct node *head){
    struct node *newnode, *temp;
     
    int ch=1;
    int value;
    while(ch!=0)
    {
    printf("enter value");
    newnode=(struct node*)malloc(sizeof(struct node));
   
 scanf("%d",&value);
     printf("enterrrr");
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL){
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
    printf("do you want to insert?1-yes 0-no");
    scanf("%d",&ch);
    }
    return head;
}
void disp(struct node *head){
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
     }
    struct node* ib(struct node *head)
    {
       struct node *newnode, *temp;  
       int value;
         newnode=(struct node*)malloc(sizeof(struct node));
         printf("enter value at begining");
          scanf("%d",&value);
            newnode->data=value;
   // newnode->next=NULL;
    newnode->next=head;
    head=newnode;
    return head;
    }
int main()
{
   struct node *head=NULL;
    head=ie(head);
    disp(head);
   head= ib(head);
   disp(head);
    return 0;
}