#include<stdio.h>

int main()
{
	long int deci,deci2,podil;
	int i=1,j,temp;
	char hexa[100];
	 printf("zadej cislo v desitkove: ");
	 if(scanf("%ld",&deci)!=1)
   {
     printf("Chyba!\n");
     return 1;
   };

  podil = deci;
	while(podil!=0)
  {
		temp = podil % 16;
		if( temp < 10)
		         temp = temp + 48; else
		         temp = temp + 55;
		hexa[i++]= temp;
		podil = podil / 16;
	}
	printf("cislo %d v sestnactkove: ",deci);
	for (j = i -1 ;j> 0;j--)
	      printf("%c",hexa[j]);
	return 0;
}
