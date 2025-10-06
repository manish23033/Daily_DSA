#include <stdio.h>
#include <stdlib.h>

// Structure to represent an array
struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};

// Function to create the array
void createArray(struct myArray *a, int tsize, int usize)
{
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int *)malloc(tsize * sizeof(int));

    // Initialize the array with zeros
    for (int i = 0; i < tsize; i++)
    {
        a->ptr[i] = 0;
    }
}

// Function to display the elements of the array
void show(struct myArray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
}

// Function to set values in the array
void setval(struct myArray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        int n; // Declare variable `n`
        printf("Enter the element for index %d: ", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}

// Main function
int main()
{
    struct myArray marks;
    createArray(&marks, 5, 4); // Create array with total size 100 and used size 20
    setval(&marks);              // Set values in the array
    printf("The elements of the array are:\n");
    show(&marks);                // Display the elements of the array

    // Free the allocated memory
    free(marks.ptr);

    return 0;
}
