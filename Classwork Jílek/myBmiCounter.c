#include <stdio.h>

int main()
{
    float height, weight, bmi;

    printf("Zadej svoji vysku [m]: ");
    scanf("%f", &height);
    if (height <= 1 && height >= 2.4)
    {
      printf("Chyba!\n" );
    }

    printf("Zadej svoji hmotnost [kg]: ");
    scanf("%f", &weight);
    if (weight <= 1 && weight >= 2.4)
    {
      printf("Chyba!\n" );
    }

    bmi = weight / (height * height);

    printf("Tvuj BMI je %f\n", bmi);

    if (bmi < 18.5)
    {
        printf("Mas podvahu!\n");
    }
    else if (bmi >= 18.5 && bmi <= 25)
    {
        printf("Jsi OK!\n");
    }
    else if (bmi > 25)
    {
      printf("Mas Nadvahu!\n");
    }
    else
    {
        printf("Chyba!\n");
    }

    return 0;
}
