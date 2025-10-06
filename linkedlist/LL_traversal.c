#include <stdio.h>
#include <stdlib.h>

// Define the structure for a Node in a linked list
struct Node
{
    int data;            // Data part to store the value of the node
    struct Node *next;   // Pointer to the next node in the list
};

// Function to traverse the linked list and print its elements
void linkedlistTraversal(struct Node *ptr)
{
    // Traverse the linked list until the end (when ptr becomes NULL)
    while (ptr != NULL)
    {
        // Print the data of the current node
        printf(" element :  %d  \n", ptr->data);  
        // Move to the next node
        ptr = ptr->next;
    }
}

int main()
{
    // Declare three pointers to nodes
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // Dynamically allocate memory for three nodes
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // Assign data to the first node and link it to the second node
    head->data = 7;          // Data for the head node
    head->next = second;     // Link the first node to the second node

    // Assign data to the second node and link it to the third node
    second->data = 11;       // Data for the second node
    second->next = third;    // Link the second node to the third node

    // Assign data to the third node and set its next pointer to NULL (end of the list)
    third->data = 55;        // Data for the third node
    third->next = NULL;      // NULL signifies the end of the list

    // Call the function to traverse and print the linked list
    linkedlistTraversal(head);

    return 0;  // End of program
}
