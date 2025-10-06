#include <stdio.h>   // Standard Input/Output library for printf
#include <stdlib.h>  // Standard library for dynamic memory allocation (malloc)

// Define the structure for a Node in a linked list
struct Node {
    int data;           // Data part to store the value of the node
    struct Node *next;  // Pointer to the next node in the linked list
};

// Function to traverse the linked list and print its elements
void linkedlistTraversal(struct Node *ptr) {
    // Traverse the linked list until the end (ptr becomes NULL)
    while (ptr != NULL) {
        // Print the data of the current node
        printf("Element: %d\n", ptr->data);
        // Move to the next node
        ptr = ptr->next;
    }
}

// Function to insert a new node at the beginning of the linked list
struct Node *insertionATfirst(struct Node *head, int data) {
    // Dynamically allocate memory for a new node
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    // Set the new node's data
    ptr->data = data;
    // Point the new node's next to the current head of the list
    ptr->next = head;
    // Return the new node, which becomes the new head
    return ptr;
}

// Function to insert a new node at a specific index in the linked list
struct Node *insertionATindex(struct Node *head, int data, int index) {
    // Dynamically allocate memory for a new node
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;  // Pointer to traverse the list
    int i = 0;

    // Traverse to the node at (index - 1)
    while (i < index - 1 && p != NULL) {
        p = p->next;
        i++;
    }

    // If index is out of bounds, print an error and return the unchanged head
    if (p == NULL) {
        printf("Index out of bounds\n");
        return head;
    }

    // Insert the new node
    ptr->data = data;    // Set the data of the new node
    ptr->next = p->next; // Point the new node's next to the next node
    p->next = ptr;       // Link the previous node to the new node

    return head;         // Return the unchanged head of the list
}

// Function to insert a new node at the end of the linked list
struct Node *insertionATEnd(struct Node *head, int data) {
    // Dynamically allocate memory for a new node
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;  // Pointer to traverse the list

    // Set the new node's data
    ptr->data = data;
    ptr->next = NULL; // The new node will point to NULL (end of list)

    // If the list is empty, the new node becomes the head
    if (head == NULL) {
        return ptr;
    }

    // Traverse to the last node in the list
    while (p->next != NULL) {
        p = p->next;
    }

    // Link the last node to the new node
    p->next = ptr;

    return head;
}

// Function to insert a new node after a given node
struct Node *insertionAfterNode(struct Node *head, struct Node *prevNode, int data) {
    // Dynamically allocate memory for a new node
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    // Set the new node's data
    ptr->data = data;
    // Point the new node's next to the next node of prevNode
    ptr->next = prevNode->next;
    // Update prevNode to point to the new node
    prevNode->next = ptr;

    return head; // Return the unchanged head of the list
}

int main() {
    // Declare three pointers for the nodes
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // Dynamically allocate memory for three nodes
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // Assign data to the first node and link it to the second node
    head->data = 7;          // Data for the head node
    head->next = second;     // Link the head node to the second node

    // Assign data to the second node and link it to the third node
    second->data = 11;       // Data for the second node
    second->next = third;    // Link the second node to the third node

    // Assign data to the third node and set its next pointer to NULL (end of the list)
    third->data = 55;        // Data for the third node
    third->next = NULL;      // NULL signifies the end of the linked list

    // Traverse and print the initial linked list
    printf("Initial linked list:\n");
    linkedlistTraversal(head);

    // Insert a new node at the beginning
    printf("\nInserting 22 at the beginning:\n");
    head = insertionATfirst(head, 22);
    linkedlistTraversal(head);

    // Insert a new node at a specific index (e.g., index 2)
    printf("\nInserting 33 at index 2:\n");
    head = insertionATindex(head, 33, 2);
    linkedlistTraversal(head);

    // Insert a new node at the end
    printf("\nInserting 66 at the end:\n");
    head = insertionATEnd(head, 66);
    linkedlistTraversal(head);

    // Insert a new node after the second node
    printf("\nInserting 44 after the second node:\n");
    head = insertionAfterNode(head, head->next, 44);
    linkedlistTraversal(head);

    return 0;  // End of the program
}
