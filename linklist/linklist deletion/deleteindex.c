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
 //case 3
struct Node* deleteatindex(struct Node* head, int index)
{
    struct Node* p= head;
    struct Node* q= head->next;
    for(int i =0; i<index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next=q->next;
   free(q);
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
    
printf("\n linked list before deletion\n");
    linkedlisttraversal(head);
    head = deleteatindex(head,2);
printf("\n linked list after deletion\n");
    linkedlisttraversal(head);

return 0;
 }