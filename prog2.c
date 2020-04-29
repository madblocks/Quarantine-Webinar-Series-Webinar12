#include <stdio.h>

void main()
{
 int a=30; // initialization of normal variable
 int *p=&a; // pointer initialization
 int *q;

 *q=a; // indirect assignment of a pointer

 printf("The value of a is %d\n",a);
 printf("The address of a is %d\n",&a);
 printf("The value of p is %d\n",p);
 printf("The value of *p is %d\n",*p);
 printf("The value of q is %d\n",q);
 printf("The value of *q is %d\n",*q);
}




  
 