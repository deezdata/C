#include <stdio.h>
#include <stdlib.h>

int main() {
  int c, b, sum, min, max, i;
  float prumer = 0;
  printf("Zadej pocet cisel: ");
  if((scanf("%d", &c)!=1) && (c<=0))
  {
    printf("Chyba!\n");
    return 1;
  }
  for (i = 0 ; i < c ; i++)
  {
    printf("Zadej %d cislo:", i+1);
    if(scanf("%d\n", &b)!=1)
    {
      printf("Chyba!\n");
      return 1;
    }
    if(i==0)
    {
      min=b;
      max=b;
    }
    else if(b < min) min = b; else if(b > max) max = b;
    prumer += b;
  }
  printf("MIN: %d, MAX: %d, prumer je: %f", min, max, prumer/c);
  return 0;
}
