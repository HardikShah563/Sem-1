#include <stdio.h>
#import <math.h>
void main()
{
    int frequency; //take input
    int capacitance; //take input
    int inductance; //take input
    int resistance; //take input
    int choice; //take input - switch case
    float omega; //for calculation of impedance
    float Z; //final answer
    int temp; //temporary
    float theta; //for trigo calculation to find ZT
    float Zt; //total impedance
    int voltage;
    int current;
    //calculate Z

    printf("Enter the capacitance of the capacitor: ");
    scanf("%d", &capacitance);

    printf("Enter the inductance of the inductor: ");
    scanf("%d", &inductance);

    printf("Enter the resitance of the resistor: ");
    scanf("%d", &resistance);

    printf("Enter the frequency of the AC input: ");
    scanf("%d", &frequency);

    printf("Enter the input voltage: ");
    scanf("%d", &voltage);

    printf("Enter the input current: ");
    scanf("%d", &current);
    printf("Your circuit in series or parallel connection: \n");
    printf("1. Series Connection\n");
    printf("2. Parallel Connection\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\\\\**Series connection**//\n");
        omega = 2 * 3.14 * frequency;
        float XL = omega * inductance;
        float XC = 1 / (omega * capacitance);
        temp = XL - XC;
        Z = (resistance*resistance) + (temp * temp);
        Z = sqrt(Z);
        theta = temp/resistance;
        theta = atan(theta);
        Zt = Z * theta;
        printf("The value of impedance is: %f\n", Z);
        printf("The value of total impednace is: %f\n", Zt);
        printf("The value of total impedance in polar format is: [%d + j %d]\n" , resistance, temp);
        break;

    case 2:
        printf("\\\\**Parallel connection**//\n");
        omega = 2 * 3.14 * frequency;
        float YR = 1/resistance;
        float YL = 1/ omega * inductance;
        float YC = omega*capacitance;
        temp = YL - YC;
        Z = (YR*YR) + (temp*temp);
        Z = 1/ sqrt(Z);
        theta = temp/resistance;
        theta = atan(theta);
        printf("The value of impedance is: %f\n", Z);
        break;

    default:
        printf("\nEnter a valid choice next time. ");
        break;
    }
    /*float pf;
    pf = cos(theta);
    pf = cos(pf);

    float activepower = voltage*current*pf;
    float reactivepower = voltage*current*sin(sin(theta));
    printf("\n\nPostLab Descriptive Questions: \n");
    printf("------------------------------");
    printf("\n\nThe pf is: %f\n", pf);
    printf("The Active Power of the circuit is: %f\n", activepower);
    printf("The Reactive Power of the circuit is: %f\n", reactivepower);
    */
}
