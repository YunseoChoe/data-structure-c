#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} node;

typedef struct Queue {
    struct Queue* front;
    struct Queue* rear;
} queue;

void insert(queue* q, int value);
void delete(queue* q);
void print_queue(queue* q);






int main() {
    return 0;
}

