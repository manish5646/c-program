#include <stdio.h> // Included only once

struct employee
{
    int code;       // User-defined data type
    float salary;
    char name[10];  // Fixed-size string
};

int main()
{
    struct employee e1;

    // Input for code
    printf("Enter the value of code: ");
    scanf("%d", &e1.code);

    // Input for salary
    printf("Enter the value of the salary: ");
    scanf("%f", &e1.salary);

    // Input for name
    printf("Enter the value of name: ");
    scanf("%%s", e1.name); // Added width specifier to prevent overflow

    // Output
    printf("Code: %d, Salary: %.2f, Name: %s\n", e1.code, e1.salary, e1.name);

    return 0;
}
