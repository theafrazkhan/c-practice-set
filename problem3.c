//write a program that reads two integers multiply 
//them and and then prints the two numbers and their
//products

//written by : github.com/theafrazkhan
//dated : 17/oct/2023

#include<stdio.h>

int product (int a, int b);

int main (void)

{
    int x, y;
    printf("Enter two number with a space between: ");
    scanf("%d %d",&x, &y);

    printf("product of %d and %d is %d",x, y, product(x,y));

    return 0;

}

int product (int a, int b)
{
    return a*b;
}