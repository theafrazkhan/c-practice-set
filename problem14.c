#include <stdio.h>

float pound_kg(float mass_pound);
float feet_inch(int height_feet);
float height_meter(int height_feet, int height_inch);
float bmi_cal(float mass_kg, int height_meter);
void print_bmi(float mass_kg, float height_meter, float bmi);

int main(void)
{
    float mass_pound;
    int height_feet;
    int height_inch;

    printf("Enter your mass in pounds: ");
    scanf("%f", &mass_pound);

    printf("\nEnter your height in feet: ");
    scanf("%d", &height_feet);

    printf("Enter your height in inches: ");
    scanf("%d", &height_inch);

    float mass_kg = pound_kg(mass_pound);
    int inch = feet_inch(height_feet);
    int meter = height_meter(height_feet, height_inch);
    float calculated_bmi = bmi_cal(mass_kg, meter);

    print_bmi(mass_kg, meter, calculated_bmi);

    return 0;
}

float pound_kg(float mass_pound)
{
    float kg;
    kg = 0.4359 * mass_pound;
    return kg;
}

float feet_inch(int height_feet)
{
    float inch;
    inch = height_feet * 12;
    return inch;
}

float height_meter(int height_feet, int height_inch)
{
    float total_inch;
    total_inch = feet_inch(height_feet) + height_inch;
    return total_inch / 39.37;
}

float bmi_cal(float mass_kg, int height_meter)
{
    float bmi;
    bmi = mass_kg / (height_meter * height_meter);
    return bmi;
}

void print_bmi(float mass_kg, float height_meter, float bmi)
{
    printf("Weight in kg is %.2f, height in meters is %f, and BMI is %.2f\n", mass_kg, height_meter, bmi);
}
