//Write code for each of the following formulas, Assume that 
//all variables are defined as double.
//KInEn = mvv/2
//res = b+c/2bc

//  written by: github.com/theafrazkhan
//  dated: 17/oct/2023

#include<stdio.h>

double calc_kin (double m, double v);
double calc_res (double b, double c);

int main (void)
{
    double mass, velocity, KinEn, res, b, c;

    printf("Enter the value of mass: ");
    scanf("%lf",&mass);

    printf("\n Enter the value of velocity: ");
    scanf("%lf",&velocity);

    KinEn = calc_kin(mass,velocity);

    printf("\nEnter the value of b: ");
    scanf("%lf",&b);

    printf("\nEnter the value of c: ");
    scanf("%lf",&c);

    res = calc_res(b,c);
}

double calc_kin(double m, double v)
{
    double kin_en;
    
    kin_en = 0.5 * m *v * v;

    return kin_en;
}

double calc_res(double b, double c)
{
    double result;

    result = (b + c) / 2 * b * c ;

    return result;
}