#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Stack structure
struct Stack {
    struct Node* top;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to push a new element onto the stack
void push(struct Stack* stack, int data) {
    struct Node* new_node = createNode(data);
    new_node->next = stack->top;
    stack->top = new_node;
}

// Function to pop an element from the stack
int pop(struct Stack* stack) {
    if (stack->top == NULL) {
        // Stack underflow
        fprintf(stderr, "Error: Stack underflow\n");
        exit(EXIT_FAILURE);
    }

    int tempData = stack->top->data;
    struct Node* tempNode = stack->top;
    stack->top = stack->top->next;
    free(tempNode);

    return tempData;
}

// Example Usage
int main() {
    struct Stack stack;
    stack.top = NULL;

    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);

    printf("Popped: %d\n", pop(&stack));
    printf("Popped: %d\n", pop(&stack));

    return 0;
}



