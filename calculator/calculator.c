#include <stdio.h>

double addition(double x, double y);
double subtraction(double x, double y);
double multiplication(double x, double y);
double division(double x, double y);
int main() {
    int choice;
    double num1, num2,result;
    do
    {
        printf("--------Calculator----------\n");
        printf("Welcome to the Calculator!\n");
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("0.Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);
        if (choice == 0)
        {
            printf("Exiting...\n:");
            break;
        }
        if (choice <0 || choice > 4)
        {
            printf("Please enter a valid choice!\n");
            continue;
        }
        printf("Enter the first number: ");
        scanf("%lf",&num1);
        printf("Enter the second number: ");
        scanf("%lf",&num2);

        switch (choice)
        {
        case 1:printf("Addition selected \n");

            result = addition(num1, num2);
            printf("Result of Addition is %.2lf\n",result);
            break;
        case 2:printf("Subtraction selected \n");
            result = subtraction(num1, num2);
            printf("Result of Subtraction is %.2lf \n",result);
            break;
        case 3:printf("Multiplication selected \n");
            result = multiplication(num1, num2);
            printf("Result of Multiplication is %.2lf \n",result);
            break;
        case 4:printf("Division selected \n");

            if (num2==0)
            {
                printf("Error: Division by zero is not allowed\n");
                break;
            }else{
                result = division(num1, num2);
                printf("Result of Division is %.2lf\n",result);
            }
            break;
        }

        }while (1);

        return 0;
    }
double addition (double x, double y)
{
    return x+y;
}
double subtraction(double x, double y)
{
    return x-y;
}
double multiplication (double x, double y)
{
    return x*y;
}
double division (double x, double y)
{
    return x/y;
}