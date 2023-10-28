/*This program will solve a mathematical equation*/
//written by Afraz Khan
//Dated: 07 october 2023

#include<stdio.h>
#include<math.h>

int x,y;

int exp_1(int x, int y);
int exp_2(int exp_1);
int exp_3(int exp_2);
void display(int exp_3);

int main (void)
{
    printf("\nEnter the value of x: ");
    scanf("%d",&x);
    printf("\nEnter the value of y: ");
    scanf("%d",&y)
    display();
    return 0;


}

int exp_1(int x, int y)
{
    return (x + y);
}

int exp_2(int a = exp_1())
{
    return (a/2);
}

int exp_3(int b = (exp_2()))
{
    return (sqrt(b));
}
void display(int c = exp_3())
{
    printf("The value of sqrt((%d + %d)/2) is %d", x, y, c);
}