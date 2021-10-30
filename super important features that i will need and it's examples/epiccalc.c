#include <stdio.h>
#include <stdlib.h>

// syntax for monkeys :)
/*

and im monkey btw :)

*/

int main()
{
  double num1;
  double num2;

  printf( "Welcome to my first calc in C. I'm glad that u are my tester.\n");

  printf( "Enter your first numba: " );
  scanf("%lf", &num1);

  printf( "Enter your second numba: " );
  scanf("%lf", &num2);

  printf("The final numba that u've got when this program calculate this: %f ", num1 + num2 );

  return 0;
}
