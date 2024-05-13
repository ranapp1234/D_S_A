#include<stdio.h>
#include<stdlib.h>

struct stack {
    int top;
    int size;
    int *arr;  // pointer to the memory allocated for array
};

int isempty(struct stack *ptr) {
    // Function to check if the stack is empty or not
    return (ptr->top == -1);
}

int isfull(struct stack *ptr) {
    // Function to check if the stack is full or not
    return (ptr->top == ptr->size - 1);
}

void push(struct stack *ptr, int val) {
    if (isfull(ptr)) {
        printf("Stack overflow! Cannot push to the stack\n");
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = val;
        printf("Pushed %d into the stack\n", val);
    }
}

int main() {
    struct stack *sp = (struct stack*)malloc(sizeof(struct stack));
    sp->size = 9;
    sp->top = -1;
    sp->arr = (int*)malloc(sp->size * sizeof(int));

    printf("Stack has been created successfully\n");
    printf("Before pushing, full: %d\n", isfull(sp));
    printf("Before pushing, empty: %d\n", isempty(sp));

    push(sp, 239);
    push(sp, 129);
    push(sp, 234);
    
    printf("\nAfter pushing elements, full: %d\n", isfull(sp));
    printf("After pushing elements, empty: %d\n", isempty(sp));

    free(sp->arr); // Free the allocated memory
    free(sp);

    return 0;
}

