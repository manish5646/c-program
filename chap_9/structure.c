#include<stdio.h>
#include<stdio.h>

struct employee
{
  int code; //this declareanew user define data
  float salary;
  char name[10];
};

int main(){
    struct employee e1,e2;
    e1.code = 4511;
    strcpy(e1.name, "Harry");
    e1.salary = 54.44;
    printf("%d %f %s",e1.code,e1.salary,e1.name);

    return 0;
}
