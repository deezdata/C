#include <stdio.h>
#include <stdlib.h>

int main()
{
  int guess;
  int SecretNumber = 5;
  int guessCount = 0;
  int guessLimit = 3;
  int OutOfGuesses = 0;

  while (guess != SecretNumber && OutOfGuesses == 0)
  {

    if (guessCount < guessLimit)
    {
      printf("Enter the Number: " );
      scanf("%d", &guess );
      guessCount++;
    }

    else
    {
      OutOfGuesses = 1;
    }

  }

  if (OutOfGuesses == 1)
  {
    printf("Out of guesses" );
  }
    else
    {
      printf("You win!" );
    }

  return 0;
}
