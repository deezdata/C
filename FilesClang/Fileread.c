#include <stdio.h>
#include <stdlib.h>

int main()
{


  FILE * fPointer;
  fPointer = fopen("ForReading.txt", "r");
  char line[150];

  while (!feof(fPointer))
  {
    fgets(line, 150, fPointer);
    puts(line);

  }
  fclose(fPointer);
return 0;
}
