#include <stdio.h>

int main()
{
    // very easy and understandable. No need for functions
    float height, weight, bmi;
    // creating huita for vyška
    printf("Zadej svoji vysku [m]: ");
    scanf("%f", &height);
    if (height <= 1 && height >= 2.4)
    {
      printf("Chyba!\n" );
    }
    // fro hmotnost
    printf("Zadej svoji hmotnost [kg]: ");
    scanf("%f", &weight);
    if (weight <= 1 && weight >= 2.4)
    {
      printf("Chyba!\n" );
    }

    // it's time to count some shit yeahhhhhhhhhhhh
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
    //epic huita. else Chyba! is my favourite тема right now
    else
    {
        printf("Chyba!\n");
    }

    return 0;
}
