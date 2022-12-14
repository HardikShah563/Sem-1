/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    int sum = 0; 
    int d; 
    printf("Enter a number: ");
    scanf("%d" , &a);
    while(a > 0)
    {
        d = a % 10; 
        sum = sum + d; 
        a = a/ 10; 
    }
    printf("Sum of all the digits is %d" , sum);
    return 0;
}
