#include <stdio.h>

int main()
{

  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);
  *ptrtoa = 6;
  printf("The value of a is %d\n", a);
  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);




  float d = 99.99;
  float* ptrtod;
  ptrtod = &d;
  printf("The value of d is %f\n", *ptrtod);
  printf("The address of d is %p\n", ptrtod);


  float e = 10.12;
   float* ptrtoe;
  ptrtoe = &e;
  printf("The value of e is %f\n", *ptrtoe);
  printf("The address of e is %p\n", ptrtoe);


  float tmp = *ptrtod;
  *ptrtod = *ptrtoe;
  *ptrtoe = tmp;

  printf("The value of e is %f\n", *ptrtoe);
  printf("The address of e is %p\n", ptrtoe);

  printf("The value of d is %f\n", *ptrtod);
  printf("The address of d is %p\n", ptrtod);

}
