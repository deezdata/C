#include <stdio.h>

int main()

{
        int width = 0, height = 0, b = 0, a = 0;

        printf("Width: \n");
        scanf("%d", & width);

        printf("Height: \n");
        scanf("%d", & height);

        for (a = 0; a != height; a++)
        {


                for (b = 0; b != width; b++ )
                {

                        if ((a == 0) || (a == height-1) || (b == width-1) || (b == 0))
                        {
                                printf("*");
                        }
                        else
                                printf(" ");
                }
                        printf("\n");
        }
        return 0;
}
