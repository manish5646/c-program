#include<stdio.h>

int main() {
   int arr[3][10];       // A 2D array to store multiplication tables
   int mul[] = {2, 7, 9}; // Array with multipliers

   // Generate multiplication tables
   for (int i = 0; i < 3; i++) { // Outer loop for each multiplier
      for (int j = 0; j < 10; j++) { // Inner loop for each multiple
         arr[i][j] = mul[i] * (j + 1); // Calculate and store in arr
      }
   }

   // Print the multiplication tables
   for (int i = 0; i < 3; i++) { // Outer loop for each multiplier
      printf("Multiplication Table for %d:\n", mul[i]);
      for (int j = 0; j < 10; j++) { // Inner loop for each multiple
         printf("%d x %d = %d\n", mul[i], j + 1, arr[i][j]); // Print table
      }
      printf("\n"); // Add a blank line for better readability
   }

   return 0;
}
