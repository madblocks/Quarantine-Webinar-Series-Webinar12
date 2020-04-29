// double-pointer **q

#include <stdio.h>
void main()
{
 int a=30;
 int *p,**q;
 
 p=&a; // address of a is stored in p, *p and a are same
 q=&p; // address of a pointer is stored in double pointer variable
 
 printf("The value of a is %d\n",a);
 printf("The address of a is %d\n",&a);
 printf("The value of p is %d\n",p);
 printf("The value of *p is %d\n",*p);
 printf("The value of **q is %d\n",**q);
}

