#include<stdio.h>

// Function declaration
void change_to_thirty_times(int*);

// Function definition
void change_to_thirty_times(int* a) {
    *a = *a * 30;  // Multiply the value at the pointer by 30
}

int main() {
    int x = 45;
    printf("Before modification, the value of x is: %d\n", x); // Initial value

    change_to_thirty_times(&x); // Call the function to modify x

    printf("After modification, the value of x is: %d\n", x); // Modified value
    return 0;
}
