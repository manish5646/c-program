#include<stdio.h>
int main(){
    int marks[5];
    // Reserve space for marks of 5 students

    printf("Enter marks of 5 students:\n");

    // Loop to take input
    for(int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
    }

    // Loop to display output
    for(int i = 0; i < 5; i++) {
        printf("The value of marks at index %d is %d\n", i, marks[i]);
    }

    return 0;
}
