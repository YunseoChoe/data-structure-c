#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int data;
    struct Node* next;
} node;

void showList(node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

node* create_node(int data) {
    node* new_node = (node*)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

node* insert_node(node* head, int data) {
    node* new_node = create_node(data);
    if (head == NULL) {
        return new_node;
    } else {
        node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
        return head;
    }
}

void mergeSortedList(node* head1, node* head2) {
    node* temp1 = head1;
    node* temp2 = head2;
    node* head3 = NULL;
    while (temp1 != NULL && temp2 != NULL) {
        if (temp1->data < temp2->data) {
            head3 = insert_node(head3, temp1->data);
            temp1 = temp1->next;
        } else {
            head3 = insert_node(head3, temp2->data);
            temp2 = temp2->next;
        }
    }
    while (temp1 != NULL) {
        head3 = insert_node(head3, temp1->data);
        temp1 = temp1->next;
    }
    while (temp2 != NULL) {
        head3 = insert_node(head3, temp2->data);
        temp2 = temp2->next;
    }
    showList(head3);
}

int main() {
    node* head1 = NULL;
    node* head2 = NULL;
    head1 = insert_node(head1, 1);
    head1 = insert_node(head1, 2);
    head1 = insert_node(head1, 4);

    head2 = insert_node(head2, 3);
    head2 = insert_node(head2, 5);
    head2 = insert_node(head2, 6);

    mergeSortedList(head1, head2);

    return 0;
}
