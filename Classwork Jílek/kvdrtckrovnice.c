#include <math.h>
#include <stdio.h>
int main()
{
    double a, b, c, discriminant, x1, x2;
    printf("Zadej parametry rovnice a,b,c(oddelene carkou): ");

    if(scanf("%lf, %lf, %lf", &a, &b, &c)==0)
    {
      printf("Chyba!\n");
      return 1;
    }

    discriminant = b * b - (4 * a * c);

    if (a==0 && b==0)
    {
      printf("Chyba!\n");
    }
    else if (a == 0)
    {
      x1 = (-1*c)/b;
      printf("Reseni rovnice: x1= %.2lf\n", x1);
    }
    else if (discriminant > 0)
    {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Reseni rovnice: \nx1 = %.2lf\nx2 = %.2lf", x1, x2);
    }

    else if (discriminant == 0)
    {
        x1 = x2 = -b / (2 * a);
        printf("Reseni rovnice: \nx1 = x2 = %.2lf;", x1);
    }
    else
    {
        printf("Rovnice nema reseni v oboru R\n");
        return 1;
    }

    return 0;
}
