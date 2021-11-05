#include <stdio.h>

int main (void)
{
  int a,b;
  char c;
  printf("Insert two integer nubers and one char, delimiter beetwen inputs is space : ");
  scanf("%d %d %c", &a, &b, &c);
  printf("You input: %d, %d, %c.", a, b, c );
  return 0;
}
