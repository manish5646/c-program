#include <stdio.h>

float average (inta,intb,intc);
float average(int a,int b,int c){
      return(a+b+c)/3;
}
int main(){
   int a=3, b=6,c=5;
   printf("The average of a, b and c is %d",average(a, b, c));
  return 0;
}