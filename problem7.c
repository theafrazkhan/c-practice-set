//We are all familiar with the fact that angles are 
//measured in degrees, minutes and seconds. Another measure
//of an angle is radian. A radian is the angle formed
//by two radii forming an arc that is equal to the radius
//of the circle.
//write a program to convert degrees into radians

//written by : github.com/theafrazkhan
//dated : 17/oct/2023

#include<stdio.h>
float radian(int degree);

int main (void)
{
    int degree;
    
    printf("Enter an angle in degree: ");
    scanf("%d",degree);

    float angle_radian = radian(degree);

    printf("%d is equal to %f",degree, angle_radian);
    
    return 0;
}

float radian (int degree)
{
    float radian;

    radian = 180 / 3.14 * degree;

    return radian;


}