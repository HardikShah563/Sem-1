#include <stdio.h>
#import <math.h>
void main()
{
    float frequency; //take input
    float capacitance; //take input
    float inductance; //take input
    float resistance; //take input
    int choice; //take input - switch case
    float omega; //for calculation of impedance
    float Z; //final answer
    int temp; //temporary
    float theta; //for trigo calculation to find ZT
    float Zt; //total impedance
    //calculate Z

    printf("Enter the capacitance of the capacitor: ");
    scanf("%f", &capacitance);

    printf("Enter the inductance of the inductor: ");
    scanf("%f", &inductance);

    printf("Enter the resitance of the resistor: ");
    scanf("%f", &resistance);

    printf("Enter the frequency of the AC input: ");
    scanf("%f", &frequency);

    printf("**Series connection**//");
    omega = 2 * 3.14 * frequency;
    float XL = omega * inductance;
    float XC = 1 / (omega * capacitance);
    temp = XL - XC;
    Z = (resistance*resistance) + (temp * temp);
    Z = sqrt(Z);
    theta = temp/resistance;
    theta = atan(theta);
    Zt = Z * theta;
    printf("The value of impedance is: %f", Z);
    printf("The value of total impednace is: %f", Zt);
    printf("The value of total impedance in polar format is: [%d + j %d]" , resistance, temp);

    printf("\\\\**Parallel connection**//");
    omega = 2 * 3.14 * frequency;
    float YR = 1/resistance;
    float YL = 1/ omega * inductance;
    float YC = omega*capacitance;
    temp = YL - YC;
    Z = (YR*YR) + (temp*temp);
    Z = 1/ sqrt(Z);
    theta = temp/resistance;
    theta = atan(theta);
    printf("The value of impedance is: %f", Z);
}
