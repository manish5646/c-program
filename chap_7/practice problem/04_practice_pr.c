#include<stdio.h>

// Function to print an array
void printArray(int a[], int n) {
   for (int i = 0; i < n; i++) {
      printf("%d ", a[i]); // Added space for better readability
   }
   printf("\n");
}

// Function to reverse an array
void reverseArray(int a[], int n) {
   int start = 0, end = n - 1;
   while (start < end) {
      // Swap elements
      int temp = a[start];
      a[start] = a[end];
      a[end] = temp;
      start++;
      end--;
   }
}

int main() {
   int arr[] = {1, 2, 3, 4, 5, 6}; // Removed unnecessary trailing comma

   printf("Original Array: ");
   printArray(arr, 6); // Correctly calling printArray

   reverseArray(arr, 6); // Reverses the array

   printf("Reversed Array: ");
   printArray(arr, 6); // Print the reversed array

   return 0;
}
