#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully\n");
    printf("before pushing, full: %d\n", isFull(sp));
    printf("before pushing, full: %d\n", isEmpty(sp));
    push(sp, 5);
    push(sp, 6);
    push(sp, 75);
    push(sp, 71);
    push(sp, 7);
    push(sp, 9);
    push(sp, 8);
    printf("after pushing, full:%d\n",isFull(sp));
    printf("after pushing, empty: %d\n", isEmpty(sp));
    printf("popped element\n");
    printf("popped %d from the stack\n",pop(sp));
     printf("popped %d from the stack\n",pop(sp));
      printf("popped %d from the stack\n",pop(sp));
    return 0;
}
