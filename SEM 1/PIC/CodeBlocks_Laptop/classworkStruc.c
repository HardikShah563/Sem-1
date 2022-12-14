#include<stdio.h>
#include<string.h>
#define MAXIMUM 5
struct car
{
    char name[20];
    int car_no;
};

void main()
{
    struct car array_car[MAXIMUM];
    int i;
    for(i = 0; i < MAXIMUM; i++ )
    {
        printf("Enter the details of the car %d\n\n", i+1);
        printf("Enter name: ");
        scanf("%s", array_car[i].name);

        printf("Enter car no: ");
        scanf("%d", &array_car[i].car_no);
    }
    printf("\n");
    printf("Name\tcar no\n");
    for(i = 0; i < MAXIMUM; i++ )
    {
        printf("%s\t%d\n",
        array_car[i].name, array_car[i].car_no );
    }
}
