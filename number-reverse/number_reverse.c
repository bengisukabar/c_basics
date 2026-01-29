#include <stdio.h>

void RunNumberReverse()
{
    char number[100];
    int i=0;
    int j;
    printf("Enter a number to reverse: ");
    scanf("%s", number);
    while (number[i] != '\0')
    {
        i++;
    }
    printf("Reversed number:");
    for (j = i-1; j >=0; j--)
    {
        printf("%c", number[j]);
    }
    printf("\n");
}
int main()
{
    RunNumberReverse();
    return 0;
}