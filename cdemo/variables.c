
#include <stdio.h>

int main()
{
  int a;
  int b = 3;
  int c;
  int p;

  a = 2;
  c = a + b;
  printf("Sum of %d and %d is %d\n", a, b, c);


  p = a;
  a = c;
  c = p;

  printf("Sum of %d and %d is %d\n", a, b, c);



}
