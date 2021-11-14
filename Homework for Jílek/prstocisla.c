#include <stdio.h>
int main(void)
{
  printf("Zadej cele cislo ");
  int c;
  if (scanf("%d",&c)!=1)
  {
    printf("Chyba!\n");
    return 1;
  }
// special thanks for idea: @OOO_SUETA & @Artemvozhov
  int A[4] = {2,3,5,7};
  int count = 0;
// creating counter for array
  for (int i = 0; i < 4; ++i)
  {
    if (c % A[i] == 0)
    {
      if (count == 0)
      {
        printf("Cislo delitelne %d, ", A[i]);
        count++;
      }
      //just for next numbers in array которые кратные
      else
      {
        printf("%d, ", A[i]);
      }

    }

  }
  //just else{} for situation like number 37
  if (count==0)
  {
    printf("Cislo neni delitelne");
  }
  printf("\n");
  return 0;
}
