//write a program that ask user for temperature in centigrade
//and prints temperature in faranhite

// written by: github.com/theafrazkhan
// Dated : 17/oct/2023

#include<stdio.h>

float convert (float centigrade);
int main (void)

{
    float temp_far, temp_cent;
    
    printf("Enter temperature in centigrade scale: ");
    scanf("%d",temp_cent);

    temp_far = convert(temp_cent);

    printf("\nTemp in faranhite is: %f",temp_far);

    return 0;

}

float convert(float centigrade)
{
    float faranhite;

    faranhite = (1.8 * centigrade ) + 32 ;

    return faranhite;

}