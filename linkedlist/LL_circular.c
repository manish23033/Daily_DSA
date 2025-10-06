#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *head) {
    struct Node *ptr = head;
    if (ptr == NULL) {
        printf("List is empty\n");
        return;
    }
    do {
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head && ptr != NULL);  // Handle both circular and non-circular lists
}

struct Node *insertAtFirst(struct Node *head, int data) {
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    if (head == NULL) {
        ptr->next = ptr;  // Circular list with a single node
        return ptr;
    }

    struct Node *p = head;
    while (p->next != head && p->next != NULL) {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

int main() {
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Assign data to the first node and link it to the second node
    head->data = 7;          // Data for the head node
    head->next = second;     // Link the first node to the second node

    // Assign data to the second node and link it to the third node
    second->data = 11;       // Data for the second node
    second->next = third;    // Link the second node to the third node

    // Assign data to the third node and link it to the fourth node
    third->data = 55;        // Data for the third node
    third->next = fourth;    // Link the third node to the fourth node

    // Assign data to the fourth node and make it circular
    fourth->data = 66;       // Data for the fourth node
    fourth->next = head;     // Make the list circular

    // Call the function to traverse and print the linked list
    linkedListTraversal(head);

    head = insertAtFirst(head, 88);
    printf("After insertion:\n");
    linkedListTraversal(head);

    return 0;
}