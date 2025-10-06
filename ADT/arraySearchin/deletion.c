#include <stdio.h>

// Function to display the elements of the array
void show(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to delete an element at a specified index
int indDeletion(int arr[], int size, int index)
{
    if (index < 0 || index >= size) // Check if the index is valid
    {
        return 0; // Return 0 to indicate failure
    }

    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    return 1; // Return 1 to indicate success
}

int main()
{
    int arr[100] = {1, 2, 3, 4}; // Initialize the array
    int size = 4, index = 2; // Set the initial size and index

    printf("Original array:\n");
    show(arr, size);

    if (indDeletion(arr, size, index)) // Perform deletion and check if successful
    {
        size -= 1; // Decrement the size of the array
    }
    else
    {
        printf("Invalid index for deletion.\n");
    }

    printf("Array after deletion:\n");
    show(arr, size);

    return 0;
}
