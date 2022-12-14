#include <stdio.h>
#include <stdlib.h>
void main()
{
    printf("Enter the number of players: ");
    int num;
    scanf("%d", &num);
    char *Name = (char *)malloc((num+1)*20*sizeof(char));
    int *RollNo = (int*)malloc((num+1)*sizeof(int));
    //data entry - after every input increment Name by 20 memory locations
    // for rollno, increment 4 memory locations
    int i=0;
    printf("\nEnter the details of the players: ");
    for(i = 0; i < num; i ++)
    {
        printf("\n-----\nPlayer %d \n", i+1);
        printf("Name: ");
        scanf("%s", Name+i*20);
        printf("Roll Number: ");
        scanf("%d", RollNo+i*sizeof(int));
    }
    printf("Data Stored...");

    //insertion of data:
    i++;
    printf("Enter roll number and name of the student whose entry you want to insert: ");
    printf("Name: ");
    scanf("%s", Name+i*20);
    printf("Roll Number: ");
    scanf("%d", RollNo+i*sizeof(int));

    //deletion of data:
    char name[20];
    printf("\nEnter the name of the student for his/her data needs to be deleted: \n");
    scanf("%s", &name);
    int flag = 0, j;
    for(i = 0; i < num+1; i ++)
    {
        if(name == Name)
        {
            flag = i;
        }
    }
    //whenever we need to display, we will skip the display of this element. So we don't delete but erase the path.

    //display:
    for(i = 0; i < num+1; i++)
    {
        if(i == flag)
        {
            continue;
        }
        printf("Name: %d", *Name+i*20);
        printf("Roll No.: %d", &RollNo+i*sizeof(int));
    }
}
