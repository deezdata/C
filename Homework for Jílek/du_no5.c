#include <stdio.h>
int main (void)
{
  int i,j,c,x=0;
  if(scanf("%d",&c)!=1)
{
    printf("Chyba!\n");
  return 1;
}

for(i=0;i<=c;i++)
{

  j=-1;
  while(j<i)
  {
    //credits to @dmitrii_gal Димону спасибо, ебался с этим час, а нужно было просто вместо break использовать j++
    x+=c;
    j++;
  }
}
printf("%d\n",x);
return 0;
}
