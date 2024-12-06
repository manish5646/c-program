#include<stdio.h>
int main() {
    int n= 10;
    scanf("%d", &n);
    for (int i = 10; i; i--) {  // Loop from 0 to 10
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}
