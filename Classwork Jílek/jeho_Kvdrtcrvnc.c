#include <stdio.h>
#include <math.h>

int main(void)
{
  int A, B, C, D;
  printf("Zadej parametry rovnice a,b,c (oddelene carkou):");
  if (scanf("%d, %d, %d", &A,&B,&C) !=3)
  {
    printf("Chyba!\n");
    return 1;
  }
  printf("Reseni rovnice: \n");
  if(A)
  {
    D=B*B-4*A*C;
    if(D<0)printf("nema reseni v oboru R.\n"); else printf("X1 = %f, X2 = %f\n",(-B-pow(D,0.5))/(2*A),(-B+pow(D,0.5))/(2*A));
  }
  else
  {
    if(!B) if(!C) printf("X = R\n");else printf("nema reseni.\n"); else printf("X = %f\n", (-C*1.0)/B);
  }
  return 0;
}
