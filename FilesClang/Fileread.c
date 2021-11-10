#include <stdio.h>
#include <stdlib.h>

int main()
{

  // it's opening a txt file and making an array of char variables
  FILE * fPointer;
  fPointer = fopen("ForReading.txt", "r");
  char line[150];

  //reading all lines in txt file
  while (!feof(fPointer))
  {
    fgets(line, 150, fPointer);
    puts(line);

  }
  fclose(fPointer);
return 0;
}
