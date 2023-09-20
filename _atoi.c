#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in a linked list
typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Function to insert a new node at the end of the linked list
void insert(Node **head, int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    Node *temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Function to display the linked list
void display(Node *head) {
    Node *current = head;

    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }

    printf("NULL\n");
}

int main() {
    Node *head = NULL;

    // Insert nodes into the linked list
    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 30);

    // Display the linked list
    printf("Linked List: ");
    display(head);

    // Free the dynamically allocated memory for the linked list nodes
    Node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
