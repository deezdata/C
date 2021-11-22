#include <stdio.h>

int input (int amt, int total)
{
int i;
int spisok[11] = {5000, 2000, 1000, 500, 200, 100, 50, 20, 5, 2, 1};

	printf("Zadej castku: ");

  if(scanf("%d",&amt)!=1)
  {
    printf("Chyba!\n");
    return 1;
  }
for (i = 0; i < 11; i++)
{
    total = (int)amt/spisok[i];

    printf("\n%d Kc - %d", spisok[i], total);

    amt = amt-(total*spisok[i]);
}

}

  int main() {
    int amount, total;
    input(amount, total);
	return 0;
}
