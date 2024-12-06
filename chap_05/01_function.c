#include<stdio.h>

// Function definition
int sum(int x, int y) {
    return x + y; // Return the sum
}

int main() {
    int a = 1, b = 2;
    printf("The sum is %d\n", sum(a, b)); // Call sum and print the result

    int a1 = 12, b1 = 23;
    printf("The sum is %d\n", sum(a1, 1)); // Call sum with a1 and 1

    int a2 = 2, b2 = 27;
    printf("The sum is %d\n", sum(a2, b2)); // Call sum with a2 and b2

    return 0;
}
