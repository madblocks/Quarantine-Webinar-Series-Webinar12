
#include <stdio.h>

void main()
{
 int a=30;
 int *p; // pointer declaration, local variable, memory will be allocated - 4 bytes
 p=&a; // address of a - pointer assignment
 printf("The address of a is %d\n", &a);
 printf("The value of a is %d\n",a);
 printf("The value of p is %d\n",p);
 printf("The value of *p is %d\n",*p);
}


