#include <stdio.h>
#include <conio.h>
void main()
{
    int num;
    int num2;
    int i,j;
    printf("Enter a number: ");
    scanf("%d", &num);
    num2 = num;
    for(i = 1; i <= num; i ++)
    {
        for(j = num2; j >= 1; j --)
        {
            printf("* ");
        }
        printf("\n");
        num2 -= 1;
    }
}
