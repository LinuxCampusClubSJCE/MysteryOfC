#include <stdio.h>

typedef struct Node {
    int data;
    Node *next;
} Node;

int main() {
    Node node;
    node.data = 10;
    node.next = NULL;
    return 0;
}