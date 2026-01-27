#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateSecretNumber()
{
    return rand() % 100+1;
}
void playGame()
{
    int secretNumber = generateSecretNumber();
    int guessNumber;
    int attempts=0;


    while (1){
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
}
int main()
{
    srand(time(NULL));
    playGame();
    return 0;
}



