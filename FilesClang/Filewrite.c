#include <stdio.h>
#include <stdlib.h>

int main()
{
  int age = 18;
  //creating file
  FILE * fPointer2;
  fPointer2 = fopen("ForWriting.txt", "w");
  //writing inside this file
  fprintf(fPointer2, "I am %d years old and I Love my girlfriend Liza\n", age);
  fclose(fPointer2);

  return 0;
}
