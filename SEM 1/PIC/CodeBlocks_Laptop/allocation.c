#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, num;
    printf("Enter the number of floating numbers you want to enter: ");
    scanf("%d", &num);
    int *ptr = (int *)malloc(num*sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory not available: ");
        exit(1);
    }
    for(i = 0; i < num; i ++)
    {
        printf("Enter an integer: ");
        scanf("%d", ptr + i);
    }
    for(i = 0; i < num; i ++)
    {
        printf("%d    ", *(ptr + i));
    }
    return 0;
}
