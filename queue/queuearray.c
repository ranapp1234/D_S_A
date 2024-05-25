#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Queue {
    int front, rear;
    int array[MAX_SIZE];
};

// Function to initialize a queue
void initializeQueue(struct Queue *queue) {
    queue->front = -1;
    queue->rear = -1;
}

// Function to check if the queue is empty
int isEmpty(struct Queue *queue) {
    return (queue->front == -1 && queue->rear == -1);
}

// Function to check if the queue is full
int isFull(struct Queue *queue) {
    return (queue->rear == MAX_SIZE - 1);
}

// Function to add an element to the rear of the queue
void enqueue(struct Queue *queue, int value) {
    if (isFull(queue)) {
        printf("Queue is full. Cannot enqueue %d\n", value);
        return;
    } else if (isEmpty(queue)) {
        queue->front = 0;
    }

    queue->rear++;
    queue->array[queue->rear] = value;
    printf("%d enqueued to the queue\n", value);
}

// Function to remove and return an element from the front of the queue
int dequeue(struct Queue *queue) {
    int value;

    if (isEmpty(queue)) {
        printf("Queue is empty. Cannot dequeue\n");
        return -1;
    } else if (queue->front == queue->rear) {
        value = queue->array[queue->front];
        queue->front = queue->rear = -1;
    } else {
        value = queue->array[queue->front];
        queue->front++;
    }

    printf("%d dequeued from the queue\n", value);
    return value;
}

// Function to display the elements of the queue
void displayQueue(struct Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return;
    }

    printf("Elements in the queue: ");
    for (int i = queue->front; i <= queue->rear; i++) {
        printf("%d ", queue->array[i]);
    }
    printf("\n");
}

int main() {
    struct Queue queue;
    initializeQueue(&queue);

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);

    displayQueue(&queue);

    dequeue(&queue);
    displayQueue(&queue);

    enqueue(&queue, 40);
    displayQueue(&queue);

    return 0;
}

