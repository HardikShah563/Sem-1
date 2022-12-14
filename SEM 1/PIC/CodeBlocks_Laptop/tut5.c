#include <stdio.h>
void main()
{
    int num;
    printf("Enter the number of elements of an array: ");
    scanf("%d", &num);
    int arr[num+1];
    int i, j;
    int temp;
    int new_no;
    printf("Enter %d numbers: ", num);
    for(i = 0; i < num; i ++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < num; i ++)
    {
        for(j = i; j < num; j ++)
        {
            if(arr[j] <= arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    printf("Sorteed array is: \n");
    for(i = 0; i < num; i ++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nEnter a number to be inserted in between: ");
    scanf("%d", &new_no);
    char a = 'T';
    for(i = num; i >= 0; i --) // 1 2 4 8 9
    {
        if(new_no > arr[i])
        {
            if(a == 'T')
            {
                arr[i+1] = new_no;
                a = 'F';
            }
        }
        else
        {
            arr[i] = arr[i-1];
        }
    }

    printf("Final array is: ");
    for(i = 0; i < num+1; i ++)
    {
        printf("%d ", arr[i]);
    }

}
