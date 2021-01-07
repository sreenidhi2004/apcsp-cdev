#include<stdio.h>

int main()
{
  int a = 545;

  // print value and size of an int variable
  printf("int a value: %d and size: %lu bytes\n", a, sizeof(a));



char c = 'b';

  // print value and size of a char variable
  printf("char c value: %c and size: %lu bytes\n", c, sizeof(c));



 float f = 1.234567;

  // print value and size of a float variable
  printf("float f value: %f and size: %lu bytes\n", f, sizeof(f));



 double d = 654.654321;

  // print value and size of a double variable
  printf("double d value: %f and size: %lu bytes\n", d, sizeof(d));


long int e= 56789;

  // print value and size of a long int variable
  printf("long int e value: %d and size: %lu bytes\n", e, sizeof(e));


 short  x = 122;

  // print value and size of a short float variable
  printf("short x value: %d  and size: %lu bytes\n", x, sizeof(x));



}

