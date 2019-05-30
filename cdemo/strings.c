#include <stdio.h>
#include <string.h>

int main()
{


char myString[] = { 'a', 'b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};

char s[52] = "";

for(int i = 0; i < 26; i++) {
  s[i] = 97 + i;
  printf("%c", s[i]);
}

if (strcmp(myString, s) == 0)
 printf("\nthe strings are identical\n");

for (int i = 0; i < 26; i++)
{
 s[i] = s[i] - 32;
 printf("%c", s[i]);


}

if (strcmp(myString, s) != 0) {
 printf("\nthe strings are not the same\n");
}
 
strcat(s, myString);

for(int i = 0; i < 52; i++) {
  printf("%c", s[i]);
}


}
