//write a program that extracts and prints the right
//second most digit of the integral portion of float

//written by : github.com/theafrazkhan
//Dated : 17/oct/2023

#include<stdio.h>

int second_digit(float num);

int main (void)
{
    float number;
    printf("Enter a floating point: ");
    scanf("%f",&number);
    
    printf("\nThe second rightmost digit of the number %d is %d",number, second_digit(number));

    return 0;

}

int second_digit(float num)
{
    int number = (int) num;
    number /= 10;
    return number % 10;
}