//write a program that extraxts and prints the
// rightmost difit of the integral portion of a 
//given float number

//written by : github.com/theafrazkhan
//dated : 17/oct/2023

#include<stdio.h>

int right_digit(float num);

int main (void)
{
    float number;

    printf("Enter a float: ");
    scanf("%f",&number);
    
    printf("\n the right most digit of the given float is %d",right_digit(number));

    return 0;
}

int right_digit(float num)
{
    int number = (int) num;
    return number %10;
}