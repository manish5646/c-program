#include<stdio.h>
int factorial(int n){
if(n == 1|| n == 0){
  return 1;
}
  //factorial(5)=1*2*3*4*5
 return factorial(n-1)*n;
}
int main(){
  int a = 4;
  printf("The factorial of %d is %d",a,factorial(a));
   
   return 0;
}