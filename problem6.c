//write a program that calculates the area and perimeter
//of a rectangle from a user supplied length and width

//written by : github.com/theafrazkhan
//dated : 17/oct/2023

#include<stdio.h>

float area(float width, float length);
float perimeter(float width, float length);

int main (void)
{
    float length, width;

    printf("Enter the width of rectangle: ");
    scanf("%f",&width);

    printf("\nEnter the length of rectangle: ");
    scanf("%f",&length);

    printf("\nThe area of triangle is %f",area(length,width));
    printf("\nThe perimeter of triangle is %f",perimeter(width,length));

    return 0;
}

float area(float width, float length)
{
    float area;
    area = width * length;
    return area;
}

float perimeter(float width, float length)
{
    float perimeter;
    perimeter = 2 *(width + length);
    return perimeter;
}