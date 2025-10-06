#include<stdio.h>
#include<stdlib.h>

// Define the structure for a Node in the doubly linked list
struct Node {
    int data;               // Data stored in the node
    struct Node *prev;      // Pointer to the previous node
    struct Node *next;      // Pointer to the next node
};

// Function to print the doubly linked list
void printList(struct Node *head) {
    struct Node *ptr = head;
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);  // Print the data of the current node
        ptr = ptr->next;             // Move to the next node
    }
    printf("NULL\n");
}

int main() {
    // Create pointers for four nodes
    struct Node *n1;
    struct Node *n2;
    struct Node *n3;
    struct Node *n4;

    // Allocate memory for each node
    n1 = (struct Node *)malloc(sizeof(struct Node));
    n2 = (struct Node *)malloc(sizeof(struct Node));
    n3 = (struct Node *)malloc(sizeof(struct Node));
    n4 = (struct Node *)malloc(sizeof(struct Node));

    // Assign data to each node
    n1->data = 10;
    n2->data = 20;
    n3->data = 30;
    n4->data = 40;

    // Link the nodes together to form a doubly linked list

    // n1 is the head, so its previous pointer is NULL
    n1->prev = NULL;
    n1->next = n2;  // n1's next points to n2

    // n2's previous points to n1, and next points to n3
    n2->prev = n1;
    n2->next = n3;

    // n3's previous points to n2, and next points to n4
    n3->prev = n2;
    n3->next = n4;

    // n4 is the tail, so its next pointer is NULL
    n4->prev = n3;
    n4->next = NULL;

    // Print the doubly linked list starting from the head (n1)
    printf("Doubly Linked List: ");
    printList(n1);

    // Free the allocated memory
    free(n1);
    free(n2);
    free(n3);
    free(n4);

    return 0;
}