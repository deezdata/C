#include <stdio.h>
#include <stdlib.h>

int main()
{

  int age;
  char name[20];
  char colour[20];

// here i was fucking with scanf("%d", &age );
/*                                     ^
                                       |
                                      /
                                    /
                  fucking ambersant or how this shit called
*/


  printf("Enter completely random name: ");
  fgets(name, 20, stdin);
  printf("Enter completely random age: ");
  scanf("%d", &age );
  printf("Enter completely random colour: ");
  scanf("%s", colour );

//hard to read i know, but fgets doing printf("%s\n"); so thats the reason why i did that nightmare

printf("I love %sHe", name);
printf(" is %d years old\n", age);
printf("He's favourite colour is %s\n", colour);


return 0;
}
