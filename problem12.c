//This program will calculate percentage of classes attended and will decide wether the student is allowed to sit in exam or not 

// written by: github.com/theafrazkhan
// Dated: 27/oct/2023

#include<stdio.h>

void calculateAttendance (int classesAttended, int classesTotal);

int main (void)
{
    int classesAttended, classesTotal;

    printf("Enter total classes sheduled: ");
    scanf("%d",&classesTotal);

    printf("Enter total classes attended: ");
    scanf("%d",&classesAttended);

    calculateAttendance(classesAttended,classesTotal);

    return 0;
}

void calculateAttendance(int classesAttended, int classesTotal)
{
    float percentage;

    percentage = (float)classesAttended / classesTotal * 100;

    printf("Your attendence is : %.0f%%",percentage);

    if (percentage >= 50 && percentage <= 100)
    {
        printf("\nYou are allowed to sit in exam");
    }
    else
    {
        printf("\nYou are not allowed to sit in exam");
    }    
}