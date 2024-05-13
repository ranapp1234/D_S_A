#include <stdio.h>
#include <stdlib.h>
// struct Node represents a single node in the linked list. Each node contains two par
// Data: This is the value stored in the node. In your case, this is an integer
// Next:This is a pointer to the next node in the linked list.
struct Node
{
  int data;
  struct Node *next;
};

// void linkedlisttraversal(struct Node *ptr) In this approach, the linkedlisttraversal() function takes a pointer to a Node structure as an argument. It is a recursive function that prints the value of the Node pointed to by ptr, then calls itself on the next Node in the linked list.
// To use this function in the main function, you need to declare the Node structure and initialize the head of the linked list.

void linkedlisttraversal(struct Node *ptr)
{
  while (ptr != NULL)
  {
    printf("element:%d\n", ptr->data);
    ptr = ptr->next;
  }
}

int main()
{
  struct Node *head;
  struct Node *second;
  struct Node *third;
  struct Node *fourth;
  //  malloc() is a function that is used to dynamically allocate memory. When you request memory using malloc(), it allocates a block of memory large enough to hold the specified number of bytes and returns a pointer to the first byte of that block.

  head = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));
  fourth = (struct Node *)malloc(sizeof(struct Node));

  head->data = 7;
  head->next = second;

  second->data = 11;
  second->next = third;

  third->data = 41;
  third->next = fourth;

  fourth->data = 66;
  fourth->next = NULL;

// in main function linkedlisttraversal(head); In this approach, the linkedlisttraversal() function is defined and called within the main function. This means that the Node structure and linked list need to be defined and initialized within the main function as well.
 
  linkedlisttraversal(head); 

  return 0;
}