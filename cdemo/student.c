#include <stdio.h>
#include <string.h>
struct Student {
  char first[200];
  char last [200];
  int age;
  int ID;
};


void printStudent(struct Student* student) {
  printf("%s, %s, %d, %d", student->first, student->last, student->age, student->ID);
}





int main()
{
struct Student student1;


char input[256];
struct Student students[200];

for (int i = 0; i < 200; i++){
printf("\nStudent Info: ");
fgets(input, 256, stdin);
sscanf(input, "%s %s %d %d", student1.first, student1.last, &(student1.age), &(student1.ID));
students[i] = student1;
printStudent(&students[i]);
}


}
