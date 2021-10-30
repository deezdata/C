#include <stdio.h>
#include <stdlib.h>


// igorella thats for string bratan


int main()
{
    // only up to 20 chatracters  so thats the reason why I did ->char name [20];
    char name [20];
    printf ("tell me ur name: ");
    fgets(name, 20, stdin);

    // so it's basically  scanf("%s\n ahuetwow", name ); but i can press spacebar :)

    printf("Ur name is %sahuetwow", name );

  return 0;
}
