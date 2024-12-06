#include <stdio.h>

int main() {
    char st[30];

    // Using fgets to safely read the input
    printf("Enter a string: ");
    fgets(st, sizeof(st), stdin);

    // Remove the newline character added by fgets, if present
    size_t len = strlen(st);
    if (len > 0 && st[len - 1] == '\n') {
        st[len - 1] = '\0';
    }

    printf("You entered: %s\n", st);

    return 0;
}
