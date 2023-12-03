#include <stdio.h>

typedef struct Stack {
    int data;
    struct Stack* next;
} stack;

void insert(stack* s);

int main() {
    return 0;
}