#include <stdio.h>
#include <stdlib.h>

int main()
{
  //creating
  FILE * fp;
  fp = fopen("ForWplus.txt", "w+");
  //printing inside file whats inside "" in line #10
  fputs("I love books", fp);
  //moving cursor
  fseek(fp, 7, SEEK_SET);
  //just imagine a person who is too cool
  //for editing inside txt file and he editing line #10 in line #14
  fputs("boxing.", fp);

  fclose(fp);

  return 0;
}
