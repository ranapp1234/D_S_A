#include <stdio.h>

#define MAX_SIZE 100

struct CircularArray {
    int array[MAX_SIZE];
    int size;
    int head; // Index of the first element
};

void initialize(struct CircularArray *circularArray, int size) {
    circularArray->size = size;
    circularArray->head = 0;
}

void rotate(struct CircularArray *circularArray, int steps) {
    circularArray->head = (circularArray->head + steps) % circularArray->size;
}

int get(struct CircularArray *circularArray, int index) {
    if (index >= 0 && index < circularArray->size) {
        return circularArray->array[(circularArray->head + index) % circularArray->size];
    } else {
        printf("Index out of range\n");
        return -1; // Assuming -1 represents an error condition
    }
}

void set(struct CircularArray *circularArray, int index, int value) {
    if (index >= 0 && index < circularArray->size) {
        circularArray->array[(circularArray->head + index) % circularArray->size] = value;
    } else {
        printf("Index out of range\n");
    }
}

int main() {
    struct CircularArray circularArray;
    int size = 13;

    initialize(&circularArray, size);

    // Setting values
    for (int i = 0; i < size; ++i) {
        set(&circularArray, i, i);
    }

    // Rotating the array by 2 steps
    rotate(&circularArray, 2);

    // Getting values after rotation
    for (int i = 0; i < size; ++i) {
        printf("%d\n", get(&circularArray, i));
    }

    return 0;
}
