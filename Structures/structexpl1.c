#include <stdio.h>
#include <string.h>

typedef struct Person // creating stucture and making parametrs for it
{
  char name[50];
  char job[50];
  int age;
  float salary;
} person; // <--- declare person variable

int main()
{
  person p1; // <--- creating person variable

  //all the info about Person 17-21
  strcpy(p1.name, "Ivan Orechov"); // btw this is string хрень that i included in line 2
  strcpy(p1.job, "Programmer");

  p1.age = 15;
  p1.salary = 1500.12131;

  //printing all the stuff
  printf("Person's name is: %s\n", p1.name );
  printf("Person's job is : %s\n", p1.job );
  printf("Person's age is: %d\n", p1.age);
  printf("Person's salary is: %.2f\n",p1.salary );

  return 0;
}
