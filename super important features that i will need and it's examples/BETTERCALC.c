#include <stdio.h>
#include <stdlib.h>


int main()
{
  // double type because i dont want to deal with zabory
  double num1;
  double num2;
  char op;
  //working amazingly wooooooow
  printf("Enter first numba(u can type float): \n" );
  scanf("%lf", &num1 );
  printf("Enter second numba(u still can type float)\n" );
  scanf("%lf", &num2 );
  printf("What do you want to do with that numbas?(+,-,/,*)\n" );
  scanf(" %c", &op );

  if (op == '+')
  {
    printf("%f", num1 + num2 );
  }
    else if (op == '-')
    {
      printf("%f", num1 - num2 );
    }
      else if (op == '/')
      {
        printf("%f", num1 / num2 );
      }
        else if (op == '*')
        {
          printf("%f", num1 * num2 );
        }
          else
        {
          printf("Error balda..." );
        }
}
