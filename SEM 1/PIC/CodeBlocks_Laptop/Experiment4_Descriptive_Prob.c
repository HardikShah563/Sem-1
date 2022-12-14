#include <stdio.h>
void main()
{
    int i,j;
    int result;
    for(i = 1; i <= 10; i ++)
    {
        for(j = 1; j <= i; j ++)
        {
            result = i * j;
            printf("%d \t", result);
        }
        printf("\n");
    }
}
