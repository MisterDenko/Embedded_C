/*
This file containe information and usecases about memory handling.
+ malloc
+ calloc
+ realloc
+ free
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;

    // Using malloc to allocate memory for an array of n integers
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    /*------------------------------------------*/

    // Initializing and printing the elements of the array
    printf("Using malloc, elements of the array:\n");
    for (i = 0; i < n; i++) {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }
    printf("\n");
    /*------------------------------------------*/

    // Using calloc to allocate memory for an array of n integers
    int *arr_calloc = (int*) calloc(n, sizeof(int));

    if (arr_calloc == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    /*------------------------------------------*/

    // Printing elements of the array initialized by calloc (should be 0)
    printf("Using calloc, elements of the array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr_calloc[i]);
    }
    printf("\n");
    /*------------------------------------------*/

    // Using realloc to resize the original array to a larger size
    printf("Enter the new number of elements (larger than before): ");
    scanf("%d", &n);

    arr = (int*) realloc(arr, n * sizeof(int));

    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }
    /*------------------------------------------*/

    // Initializing new elements and printing the array
    printf("After realloc, elements of the array:\n");
    for (i = 0; i < n; i++) {
        if (i >= n / 2) {
            arr[i] = i + 1; // Assigning new values to the resized portion
        }
        printf("%d ", arr[i]);
    }
    printf("\n");
    /*------------------------------------------*/

    // Freeing allocated memory
    free(arr);
    free(arr_calloc);

    printf("Memory has been freed.\n");
    /*------------------------------------------*/

    return 0;
}
