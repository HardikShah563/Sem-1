#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    float EMI, principal, rate, time;
    printf("Enter the principal amount: \n");
    scanf("%f", &principal);
    printf("\nEnter the rate of interest: \n");
    scanf("%f", &rate);
    printf("\nEnter time: \n");
    scanf("%f", &time);
    EMI = principal*rate*(pow((1+rate),time))/(pow((1+rate),time) -1);
    printf("EMI is: %f", EMI);
}
