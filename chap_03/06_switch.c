#include<stdio.h>
int main(){
  int a;
  printf("Enter a: ");
  scanf("%d", &a);

  switch(a){
    case 1:
    printf("You enterd 1\n");
    break;
    case 2:
    printf("You enterd 2\n");
    break;
    case 3:
    printf("You enterd 3\n");
    break;
    case 4:
    printf("You enterd 4\n");
    break;
    default:
    printf("nothing matched");
    
  }
  return 0;
}