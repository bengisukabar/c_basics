#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
 {
     int secretNumber;
     int guessNumber;
     int attempts=0;
     srand(time(NULL));
     secretNumber = rand()%100+1;
    while (1)
    {
        printf("Enter your guess between 1-100:\n");
        scanf("%d",&guessNumber);
        attempts++;
        if (guessNumber <secretNumber)
        {
            printf("Guess a bigger number\n");
        }else if (guessNumber > secretNumber)
        {
            printf("Guess a smaller number\n");
        }else
        {
            printf("Correct guess,You win!\n");
            printf("Your attemps:%d\n",attempts);
            break;
        }
    }
    return 0;
 }
