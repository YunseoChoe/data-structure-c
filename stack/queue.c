#include <stdio.h>
#include <stdlib.h>

#define QUEUE_MAX_SIZE 5

// Queue 구조체
typedef struct Queue {
    struct Queue* rear;
    struct Queue* front;
} queue;

// Node 구조체
typedef struct Node {
    int data;
    struct Node* next;
} node;

