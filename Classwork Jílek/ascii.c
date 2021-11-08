#include <stdio.h>
int main()
{
    int i;
    for(i=0; i<256; i++)
    {
      printf("%03d %c   ", i,i );
      if((i+1) %8==0) printf("\n");
    }

    return 0;
}
