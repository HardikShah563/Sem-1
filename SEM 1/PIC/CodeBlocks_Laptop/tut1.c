#include <stdio.h>
void main()
{
    int num, num1, num2;
    printf("Enter a number: ");
    scanf("%d", &num);
    int arr[num];
    int i,j;
    int counter = 0;
    int array_count = 0;
    //for loop to find prime numbers and maintain a array of it for further calculations.
    for(i = 1; i <= num; i++)
    {
        //arr[i] = 0;
        for(j = 1; j <= i; j ++)
        {
            if(j % i == 0)
            {
                counter += 1;
            }
        }
        if(counter == 2)
        {
            arr[array_count] = i;
            array_count ++;
        }
        counter = 0;
    }
    for(i = 0; i < num; i ++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n\n");
    for(i = 0; i < num; i ++)
    {
        for(j = 0; j < num; j ++)
        {
            if(arr[i] + arr[j] == num)
            {
                num1 = i;
                num2 = j;
            }
        }
    }
    printf("%d is a result of sum of two primes numbers %d and %d respectively. ", num, num1, num2);
}
