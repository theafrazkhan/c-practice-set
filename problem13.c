//This program calculates the price for a car rental company 
//on input of no. of miles and no of days used it will calculate the total price 

// written by : github.com/theafrazkhan
// Dated : 27/oct/2023


#include<stdio.h>
float cost (int days, int miles);

int main (void)
{
    int miles, days;

    printf("\t\tThis program will calculate the cost for car rent \n\n");

    printf("Enter the number of days you drove the car: ");
    scanf("%d",&days);

    printf("Enter the number of miles you drove the car: ");
    scanf("%d",&miles);

    float final_cost = cost (days, miles);

    printf("\n\tPlease pay %.2f\nyou have used the car for %d days and drove %d miles",final_cost,days,miles);

    return 0;


}

float cost (int days, int miles)
{
    float cost;

    cost = (25 * days) + (0.15 * miles);

    if (days > 30)
    {
        cost = cost - (0.2 * cost);
    }
    else if (days < 15)
    {
        cost = cost + (cost * 1.99);
    }

    return cost;
}