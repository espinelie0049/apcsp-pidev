#include <stdio.h>
#include <math.h>

void areaofcircle(int r){

float area = 3.14*(r*r);

printf("area is %f when radius is %d\n", area, r);


}

int main()
{

for (int a = 3.5; a < 12.5; a++) {

areaofcircle(a);

}

return 0;

}


