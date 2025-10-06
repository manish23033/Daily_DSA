#include <stdio.h>

// Function to perform linear search on an array
int linearSearch(int arr[], int size, int element)
{
    // Iterate through each element of the array
    for (int i = 0; i < size; i++)
    {
        // Check if the current element matches the target
        if (arr[i] == element)
        {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if the element is not found
}

int main()
{
    // Define and initialize the array
    int arr[] = {1, 2, 33, 4, 5, 56, 65, 77};

    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(int);

    // Define the element to search for
    int element = 33;

    // Call the linearSearch function and store the result
    int searchIndex = linearSearch(arr, size, element);

    // Corrected the printf statement to include the element properly
    if (searchIndex != -1)
    {
        printf("The element %d is found at index %d.\n", element, searchIndex);
    }
    else
    {
        printf("The element %d is not found in the array.\n", element);
    }

    return 0; // Indicate successful program termination
}
