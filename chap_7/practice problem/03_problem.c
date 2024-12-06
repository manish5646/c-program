#include<stdio.h>
int main(){
    int arr[10]; // Declares an array of size 10
    int n;
    for (int i = 0; i <10; i++)
    {
      arr[i] = n* (i+1); // ERROR: 'n' is not defined anywhere in the code
    }
    for (int i=0; i<10;i++)
    {
      printf("The value of %d x %d = %d \n",n, i+1, arr[i]); // ERROR: 'n' is still undefined
    }
    return 0;
}
