// void pointer
#include <stdio.h>

void main()
{
 int a=30;
 float b=3.5;
 void *p;

 p=&a;
 printf("The value of a is %d\n", *(int*)p); // *p - typecast with respective datatype

 p=&b;
 printf("The value of b is %f\n",*(float*)p); 
}
 