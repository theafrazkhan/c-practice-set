//This program finds the maximum of two numbers taken from the user

// written by: github.com/theafrazkhan
// Dated : 27/oct/2023

#include<stdio.h>

int main (void)
{
    float num1, num2;
    printf("\tThis program will calculate the maximum of two numbers \n\n");

    printf("Enter two numbers: ");
    scanf("%f %f",&num1, &num2);

    if(num1 > num2)
    {
        printf("\n %.2f is greater than %.2f",num1, num2);
    }

    else if (num2 > num1)
    {
        printf("\n %.2f is greater than %.2f",num2, num1);

    }
    else 
    {
        printf("\n no one is maximum");

    }

    return 0;

}