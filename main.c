#include <stdio.h>

double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double divide(double x, double y);

int main()
{   
    // Taking First Number's Input
    double num1;
    printf("Enter the first number: \n");
    scanf("%lf", &num1);

    // Taking second number's input
    double num2;
    printf("Enter the second number: \n");
    scanf("%lf", &num2);

    //taking operation's input
    int opr;
    printf("Select the operation-\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("(1/2/3/4)\n");
    scanf("%d", &opr);

    // Addition
    if (opr == 1)
    {
        printf("Result: %.2lf\n", add(num1, num2));
    }
    // Subtraction
    else if (opr == 2)
    {
        printf("Result: %.2lf\n", subtract(num1, num2));
    }
    // Multiplication
    else if (opr == 3)
    {
        printf("Result: %.2lf\n", multiply(num1, num2));
    }
    // Division
    else if (opr == 4)
    {
        if (num2 != 0)
            printf("Result: %.2lf\n", divide(num1, num2));
        else
            printf("Error: Cannot divide by zero\n");
    }
    // Invalid
    else
    {
        printf("Invalid Option!\n");
    }

    return 0;
}

// Addition func
double add(double x, double y)
{
    return x + y;
}

// Subtraction func
double subtract(double x, double y)
{
    return x - y;
}

// Multiplicatoin func
double multiply(double x, double y)
{
    return x * y;
}

// Division func
double divide(double x, double y)
{
    return x / y;
}
