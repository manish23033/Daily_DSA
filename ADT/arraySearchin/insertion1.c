#include <stdio.h>

// Function to display the array
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");
}

// Function to insert an element at a specific index
int indInsertion(int arr[], int size, int element, int capacity, int index)
{
    if (size >= capacity) // Check if there's enough capacity
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--) // Shift elements to the right
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element; // Insert the element
    return 1;
}

int main()
{
    int arr[100] = {2, 3, 4, 7, 12}; // Initial array
    int size = 5, element = 45, index = 3; // Size, new element, and index for insertion

    printf("Array before insertion:\n");
    display(arr, size);

    if (indInsertion(arr, size, element, 100, index) == 1) // Check for successful insertion
    {
        size += 1; // Increment size only if insertion is successful
    }

    printf("Array after insertion:\n");
    display(arr, size);

    return 0;
}
