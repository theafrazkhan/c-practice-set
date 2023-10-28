//This program has user defined functions to calculate
//the area of circle and triangle

// written by: github.com/theafrazkhan
// Dated: 27/oct/2023

#include<stdio.h>

#define pi 3.14159
float area_c (float radius);
float area_t(float base, float height);

int main (void)
{
    float radius, area_circle, area_triangle;
    float base, height;
    printf("This program will calculate the area of circle and triangle:\n ");

    printf("Enter the radius of circle: ");
    scanf("%f",&radius);

    printf("Area of circle is %0.2f\n",area_c(radius));

    printf("\nEnter the base and height of the triangle: ");
    scanf("%f %f",&base, &height);

    area_triangle = area_t(base,height);

    printf("\nThe area of triangle is %0.2f",area_triangle);

    return 0;


}

float area_c(float radius)
{
    float area;
    area = pi * radius *radius;
    return area;
}

float area_t(float base, float height )
{
    float area;
    area = 0.5 * base * height;
    return area;
}