#include <stdio.h>
void main() {
    int num;
    int num2;
    int i,j;
    int choice;
    printf("Enter your choice 1 or 2: ");
    scanf("%d", &choice);
    printf("Enter a number: ");
    scanf("%d", &num);
    switch(choice) {
    case 1:
    num2 = num;
    for(i = 1; i <= num; i ++)
    {
        for(j = 0; j <= num2; j ++)
        {
            printf(" ");
        }
        num2 -= 1;
        for(j = 1; j <= i; j ++)
        {
            printf("* ");
        }
        printf("\n");
    }
    break;

    case 2:
    num2 = num;
    for(i = 1; i <= num; i ++)
    {
        for(j = 0; j <= num2; j ++)
        {
            printf(" ");
        }
        num2 -= 1;
        for(j = 1; j <= i; j ++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    break;

    default:
    printf("Enter a valid choice. ");
    break;
    }
}
