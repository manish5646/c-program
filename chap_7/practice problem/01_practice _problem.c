#include<stdio.h>
int main(){
   int a[] = {1,2,3,4,5,6,77,8,9};
   int *ptr = a;
   printf("The value address %u is %d",ptr+3,*(ptr+3));

   return 0;
}