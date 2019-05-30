
#include <stdio.h>
#include <math.h>




void areaofcircle(int r){

float area = 3.14159*(r*r);

printf("area is %f when radius is %d\n", area, r);


}

int main()
{




char input[256];
float radius;

printf("first radius: ");
fgets(input, 256,stdin);
sscanf(input, "%f", &radius);


float radius2;

printf("second radius: ");
fgets(input, 256,stdin);
sscanf(input, "%f", &radius2);

for (int a = radius; a <= radius2; a++) {

areaofcircle(a);

}

/*

areaofcircle(radius);
areaofcircle(radius2);
*/
return 0;

}
