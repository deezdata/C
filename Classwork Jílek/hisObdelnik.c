#include <stdio.h>

int main()
{
  int znak,x,y,x1,x2,y1,y2;
  printf("Zadej souradnice obdelnika ve tvaru x1,y1,x2,y2: ");
  if ((scanf("%d %d %d %d", &x1, &x2, &y1, &y2)!=4) || (x1<1) || (x1>80) || (x2<1) || (x2>80) || (y1<1) || (y1>80) || (y2<1) || (y2>80) || (x1>x2) || (y1>y2))
  {
    printf("Chyba!" );
    return 1;
  }
  for (y = 1; y < 81; y++)
  {
    for (x = 1; x < 81; x++)
    {
      if (x1>x2) break;
      znak = 32;
      if ((x==x1) && (y==y1)) znak=218;
      if ((x==x2) && (y==y1)) znak=191;
      if ((x==x1) && (y==y2)) znak=192;
      if ((x==x2) && (y==y2)) znak=217;

      if ((x>x1) && (x<x2) && ((y==y1) || (y==y2))) znak=196;
      if ((y>y1) && (y<y2) && ((x==x1) || (x==x2))) znak=179;
      printf("%c",znak );

    }
    if (y>y2) break;
    printf("\n");
  }
  return 0;
}
