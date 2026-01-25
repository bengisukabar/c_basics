#include <stdio.h>

int main() {
    int choice;
    double num1, num2,result;

    printf("--------Calculator----------\n");
    printf("Welcome to the Calculator!\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("0.Exit\n");

    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch (choice)
    {
        case 1:printf("Addition selected \n");
        printf("Enter first number:");
        scanf("%lf",&num1);
        printf("Enter second number:");
        scanf("%lf",&num2);
        result = num1 + num2;
        printf("Result of Addition is %.2lf",result);
        break;
        case 2:printf("Subtraction selected \n");
        printf("Enter first number:");
        scanf("%lf",&num1);
        printf("Enter second number:");
        scanf("%lf",&num2);
        result = num1 - num2;
        printf("Result of Subtraction is %.2lf",result);
        break;
        case 3:printf("Multiplication selected \n");
        printf("Enter first number:");
        scanf("%lf",&num1);
        printf("Enter second number:");
        scanf("%lf",&num2);
        result = num1 * num2;
        printf("Result of Multiplication is %.2lf",result);
        break;
        case 4:printf("Division selected \n");
        printf("Enter first number:");
        scanf("%lf",&num1);
        printf("Enter second number:");
        scanf("%lf",&num2);
        if (num2==0)
        {
            printf("Error: Division by zero is not allowed\n");
            break;
        }
        result = num1 / num2;
        printf("Result of Division is %.2lf",result);

        break;
        case 0:printf("Exit\n");
        break;
        default:printf("Invalid choice \n");
    }

    return 0;
}
