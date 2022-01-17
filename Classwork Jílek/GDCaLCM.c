#include <stdio.h>
int main()
{
    int num1, num2, nsd, nsn, count = 1, small;

    printf("Zadej 2 cisla(rozdilem je carka): \n");
    scanf("%d,%d", &num1, &num2);

    small = (num1 < num2) ? num1 : num2;

    while(count <= small)
    {
        if(num1 % count==0 && num2 % count==0)
        {
            nsd=count;
        }
        count++;
    }

    nsn=(num1*num2) / nsd;

    printf("Nejvetsi S delitel = %d\nNejmensi S nasobek = %d\n", nsd, nsn);

    return 0;
}
