#include <stdio.h>

int main()
{
  int a;
  int b;

        printf("enter value for a\n");
        scanf("%d", &a);
        printf("enter value for b\n");
        scanf("%d", &b);

  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else
  {
    printf("a is NOT 0\n");
  }

  if (a !=b)
  {
   printf("a is not equal to b\n");
  }
  else
  {
    printf("a is equal to 0\n");
     }

  if (a > b)
  {
  printf("a is greater than b \n");
  }
  else
  {
    printf("a NOT greater than b\n");
  }

  if (a >= b)
  {
  printf("a is greater than or equal to b \n");
  }
  else
  {
    printf("a is NOT greater than or equal to b\n");
  }

  if (a == 0 && b == 0)
  {
  printf("a is equal to 0 AND b is equal to 0 \n");
  }
 else
  {
    printf("a is NOT equal to 0 AND b is NOT equal to 0\n");
  }

  if (a == 0 ||  b == 0)
   {
  printf("a is equal to 0 OR b is equal to 0 \n");
  }
 else
  {
    printf("a is NOT equal to 0 or b is NOT equal to 0\n");
  }

  if (!(a == 0))
  {
  printf("a is NOT equal to 0 \n");
  }
 else
  {
    printf("a is equal to 0\n");
    }

}
