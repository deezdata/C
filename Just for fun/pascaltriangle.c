#include <stdio.h>

int fctrl(int n)
{
   int f;

   for(f = 1; n > 1; n--)
      f *= n;

   return f;
}

int ncr(int n,int r)
{
   return fctrl(n) / ( fctrl(n-r) * fctrl(r) );
}

int main() {
   int n, i, j;

   if(scanf("%d",&n)!=1) //<--will work properly only under 12, than- pizdec
   {
     printf("Chyba!\n");
   return 1;
   }

   for(i = 0; i <= n; i++)
   {
      for(j = 0; j <= n-i; j++)
         printf("  ");

      for(j = 0; j <= i; j++)
         printf(" %3d", ncr(i, j));

      printf("\n");
   }
   return 0;
}
