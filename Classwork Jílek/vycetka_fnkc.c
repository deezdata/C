#include <stdio.h>
int Vstup(int * C)
{
  printf("Zadej castku: ");
  return (scanf("%d",C) == 1) && (*C > 0);
}

void Vystup (int C)
{
  int A, P[]={5000, 2000, 1000, 500, 200, 100, 50, 20, 5, 2, 1};
  for (A=0;A<=11;A++)
  {
    if (C/P[A]>0)
    {
      printf("%4d Kc - %6d\n",P[A], C/ P[A]);
      C=C % P[A];
    }
  }
}

int main()
{
  int C;
  if(!Vstup(&C)) {printf("Chyba!\n");return 1;}
  Vystup(C);
}
