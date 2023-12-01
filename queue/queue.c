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

