#include <stdio.h>

int main()
{
int b;
printf("enter divident\n");
scanf("%d", &b);

for (int a = 1; a < 101; a++) {

        if((a % b) == 0){
        printf("%d is divisible by %d\n", a, b);

}
}
return 0;
}





