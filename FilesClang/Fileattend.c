#include <stdio.h>
#include <stdlib.h>

int main()
{
  // it's opening a txt file
  FILE * fPointer1;
  fPointer1 = fopen("ForAttending.txt", "a");

  //printing from point where my cursor stopped when i was doing this
  fprintf(fPointer1, "\n- i love books(koks) :)");
  fclose(fPointer1);

  return 0;
}
