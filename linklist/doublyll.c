// #include <stdio.h>
// #include <stdlib.h>

// // Define structure for a node
// struct Node {
//     int data;
//     struct Node* next;
//     struct Node* prev;
// };

// // Function to append a new node at the end of the list
// void append(struct Node** head_ref, int new_data) {
//     // Allocate node
//     struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

//     struct Node* last = *head_ref; // Used in step 5

//     // Put in the data
//     new_node->data = new_data;

//     // This new node is going to be the last node, so make next of it as NULL
//     new_node->next = NULL;

//     // If the Linked List is empty, then make the new node as head
//     if (*head_ref == NULL) {
//         new_node->prev = NULL;
//         *head_ref = new_node;
//         return;
//     }

//     // Else traverse till the last node
//     while (last->next != NULL)
//         last = last->next;

//     // Change the next of last node
//     last->next = new_node;

//     // Make last node as previous of new node
//     new_node->prev = last;

//     return;
// }

// int main() {
//     // Initialize head as NULL
//     struct Node* head = NULL;

//     // Add elements to the list
//     append(&head, 1);
//     append(&head, 2);
//     append(&head, 3);

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

// Doubly Linked List structure
struct DoublyLinkedList
{
    struct Node *head;
};

// Function to create a new node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to append a node to the end of the list
void append(struct DoublyLinkedList *dll, int data)
{
    struct Node *new_node = createNode(data);

    if (dll->head == NULL)
    {
        dll->head = new_node;
    }
    else
    {
        struct Node *current = dll->head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = new_node;
        new_node->prev = current;
    }
}

// Function to display the doubly linked list
void display(struct DoublyLinkedList *dll)
{
    struct Node *current = dll->head;

    while (current != NULL)
    {
        printf("%d <-> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Example usage
int main()
{
    struct DoublyLinkedList dll;
    dll.head = NULL;

    append(&dll, 1);
    append(&dll, 2);
    append(&dll, 3);

    display(&dll);

    return 0;
}
