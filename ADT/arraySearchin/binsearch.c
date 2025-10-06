#include<stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int size, int element) {
    int low, high, mid;

    // Initialize low and high indices
    low = 0; 
    high = size - 1;

    // Loop until low index is less than or equal to high index
    while (low <= high) {
        // Calculate mid index
        mid = (low + high) / 2;

        // If the element at mid is the target element, return mid
        if (arr[mid] == element) {
            return mid;
        }

        // If the element at mid is less than the target, search the right half
        if (arr[mid] < element) {
            low = mid + 1;
        }
        // If the element at mid is greater than the target, search the left half
        else {
            high = mid - 1;
        }
    }

    // If the element is not found, return -1
    return -1;
}

int main() {
    // Initialize the array
    int arr[] = {4, 5, 8, 88, 99, 100}; 
    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(int);
    // Element to be searched
    int element = 88;
    // Call binarySearch and store the result
    int searchIndex = binarySearch(arr, size, element);

    // Corrected the printf statement to show the index
    if (searchIndex != -1) {
        printf("The element %d is found at index: %d\n", element, searchIndex);
    } 
    else {
        printf("The element %d is not found in the array.\n", element);
    }

    return 0;
}
