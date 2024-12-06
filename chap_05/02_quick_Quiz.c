#include<stdio.h>

// Function definitions
void good_morning() {
    printf("Good Morning!\n");
}

void good_afternoon() {
    printf("Good Afternoon!\n");
}

void good_evening() {
    printf("Good Evening!\n");
}

int main() {
    // Change the sequence of function calls
    good_evening();
    good_morning();
    good_afternoon();

    return 0;
}
