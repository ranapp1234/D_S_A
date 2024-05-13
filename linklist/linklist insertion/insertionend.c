#include<stdio.h>
#include<stdlib.h>
struct Node
{
  int data;
  struct Node* next;  
};

 void linkedlisttraversal(struct Node* ptr)
 {
    while (ptr!=NULL)
    {
        printf("element:%d\n", ptr->data);
        ptr= ptr->next;
    }
 }
struct Node* insertatend(struct Node* head, int data)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data= data;
    struct Node*p=head;
    while(p->next!= NULL)
    {
        p=p->next;
    }
    p-> next=ptr;
    ptr-> next= NULL;
    return head;
}

 int main()
 {
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third =(struct Node*)malloc(sizeof(struct Node));
    fourth =(struct Node*)malloc(sizeof(struct Node));

    head->data=7;
    head->next=second;

    second->data=11;
    second->next=third;
    
    third->data= 41;
    third->next=fourth;

    fourth->data= 66;
    fourth->next=NULL;
    
    printf("\n linked list before inertion\n");
    linkedlisttraversal(head);
    head =insertatend(head , 59);
    printf("\n linked list after inertion\n");
    
    linkedlisttraversal(head);
    return 0;
}