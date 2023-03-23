#include <stdio.h>

void swap(int *xp, int *yp) {
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

// Function to implement bubble sort
void bubbleSort(int arr[], int n) {
  int i, j, swapCount;
  for (i = 0; i < n - 1; i++) {
    swapCount = 0;

    for (j = 0; j < n - i - 1; j++)
      if (arr[j] > arr[j + 1]) {
        swap(&arr[j], &arr[j + 1]);
        swapCount++;
      }
    printf("Pass #%d: %d\n", i + 1, swapCount);
  }
}

// Function to print an array (Sorted)
void printArray(int arr[], int size) {
  int i;
  for (i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

int main() {
  int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
  int n = sizeof(arr) / sizeof(arr[0]);
  bubbleSort(arr, n);
  printf("\nSorted array: ");
  printArray(arr, n);
  return 0;
}
