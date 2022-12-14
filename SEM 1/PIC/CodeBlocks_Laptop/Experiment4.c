/*
    5
   45
  345
 2345
12345
*/
#include <stdio.h>
void main()
{
    int i,j;
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int num2 = num;
    char status = 'F';
    for(i = 1; i <= num; i ++)
    {
        for(j = 1; j <= num; j ++)
        {
            if(j >= num2)
            {
                status = 'T';
            }
            if(status == 'T')
            {
                printf("%d", j);
                status = 'F';
            }
            else{
                printf(" ");
                status = 'F';
            }

        }
        printf("\n");
    }
}
