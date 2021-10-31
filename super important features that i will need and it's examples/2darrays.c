#include <stdio.h>
#include <stdlib.h>

int main()
{
int nums[3][3] =
{
              {1,2,3},//<--------         // LOOK HERE FOR REFERENCE
              {4,5,6},//<--------
              {7,8,9},//<--------
};
// so the for loop inside for loop show us how to reach each one of number in array
int i, j;
for (i = 0; i < 3; i++)
{
  for (j = 0; j < 3; j++)
  {
    printf("%d,", nums[i][j]);
  }
  // it's located here cause we want to show it like in code. (commentary 1 for reference)
  printf("\n" ); //cause it will look awful if we will not
}
  return 0;
}
