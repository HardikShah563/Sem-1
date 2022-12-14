#include <stdio.h>
#include <conio.h>
void main()
{
    int num;
    int i,j;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i = 1; i <= num; i ++)
    {
        for(j = 1; j <= i; j ++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
