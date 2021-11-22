#include <stdio.h>
  int main() {

    int A, C;
    int P[11] = {5000, 2000, 1000, 500, 200, 100, 50, 20, 5, 2, 1};
    printf("Zadej castku: ");
    if(scanf("%d",&C)!=1)
    {
      printf("Chyba!\n");
      return 1;
    }

    for (A = 0; A <= 11; A++)
    {
      if (C/ P[A]>0)
      {
        printf("%4d Kc - %6d\n", P[A], C/ P[A]);
        C=C % P[A];
      }
    }
	return 0;
}
