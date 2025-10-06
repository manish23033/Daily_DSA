#include <stdio.h>   // Include standard input/output library for printf and other I/O functions
#include <stdlib.h>  // Include standard library for memory allocation functions like malloc and free

// Define the structure for a Node in a linked list
struct Node {
    int data;          // Data part to store the value of the node
    struct Node *next; // Pointer to the next node in the list
};

// Function to traverse the linked list and print its elements
void linkedlistTraversal(struct Node *ptr) {
    // Traverse the linked list until the end (when ptr becomes NULL)
    while (ptr != NULL) {
        printf("Element: %d\n", ptr->data); // Print the data of the current node
        ptr = ptr->next;                   // Move to the next node
    }
}

// Function to delete the first node in the linked list
struct Node *deleteFirst(struct Node *head) {
    struct Node *ptr = head; // Temporarily store the current head
    head = head->next;       // Move the head pointer to the next node
    free(ptr);               // Free the memory of the old head node
    return head;             // Return the updated head pointer
}

// Function to delete a node at a specific index (1-based) in the linked list
struct Node *deleteInBetween(struct Node *head, int index) {
    struct Node *p = head;       // Pointer to the current node
    struct Node *q = head->next; // Pointer to the next node
    // Traverse the list to reach the node just before the one to delete
    for (int i = 0; i < index - 1; i++) {
        p = p->next; // Move p to the next node
        q = q->next; // Move q to the next node
    }
    p->next = q->next; // Update the link to skip the node at 'index'
    free(q);           // Free the memory of the deleted node
    return head;       // Return the updated head pointer
}

// Function to delete the last node in the linked list
struct Node *deleteAtLast(struct Node *head) {
    struct Node *p = head;       // Pointer to the current node
    struct Node *q = head->next; // Pointer to the next node
    // Traverse the list until the second last node is reached
    while (q->next != NULL) {
        p = p->next; // Move p to the next node
        q = q->next; // Move q to the next node
    }
    p->next = NULL; // Set the next pointer of the second last node to NULL
    free(q);        // Free the memory of the last node
    return head;    // Return the updated head pointer
}

// Function to delete a node with a specific value in the linked list
struct Node *deleteAtIndex(struct Node *head, int value) {
    struct Node *p = head;       // Pointer to the current node
    struct Node *q = head->next; // Pointer to the next node
    // Traverse the list to find the node with the given value
    while (q->data != value && q->next != NULL) {
        p = p->next; // Move p to the next node
        q = q->next; // Move q to the next node
    }
    if(q->data == value){
    p->next = q->next; // Update the link to skip the node with the given value
    free(q);    
    }       // Free the memory of the deleted node
    return head;       // Return the updated head pointer
}

int main() {
    // Declare pointers to nodes
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Dynamically allocate memory for nodes
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Initialize the data and link nodes
    head->data = 4;      // Assign value to the first node
    head->next = second; // Link the first node to the second

    second->data = 3;     // Assign value to the second node
    second->next = third; // Link the second node to the third

    third->data = 1;      // Assign value to the third node
    third->next = fourth; // Link the third node to the fourth

    fourth->data = 6;      // Assign value to the fourth node
    fourth->next = NULL;   // Set the next pointer of the last node to NULL

    printf("Linked list before deletion:\n");
    linkedlistTraversal(head); // Print the initial linked list

    // Delete the first node and update the head pointer
    head = deleteFirst(head);
    printf("Linked list after deleting the first element:\n");
    linkedlistTraversal(head); // Print the updated linked list

    // Delete a node at index 1 and update the list
    head = deleteInBetween(head, 1);
    printf("Linked list after deleting the element at index 1:\n");
    linkedlistTraversal(head); // Print the updated linked list

    // Delete the last node
    head = deleteAtLast(head);
    printf("Linked list after deleting the last element:\n");
    linkedlistTraversal(head); // Print the updated linked list

    // Delete a node with a specific value
    head = deleteAtIndex(head, 1);
    printf("Linked list after deleting a node with value 1:\n");
    linkedlistTraversal(head); // Print the updated linked list

    return 0; // End the program
}
