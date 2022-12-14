#include <stdio.h>
struct player
{
    char name[20];
    int totMatPlayed;
    float bstBowlFig;
};

void searching()
{
    char n1[20];
    int i;
    printf("Enter name to be searched: ");
    scanf("%d", &n1);
    printf("Displaying after searching: ");
    for(i = 0; i < 5; i ++)
    {
        if(strcmp(n1, player[i].name) == 0)
        {
            printf("%s \t %d \t %f \n", player[i].name, player[i].totMatPlayed, player[i].bstBowlFig);
        }
    }
}

void deleting(int number)
{
    printf("Enter the serial number of the player you want to delete: ");
    int entry;
    scanf("%d", &entry);
    for(i = entry - 1; i < number; i ++)
    {

    }
}


void main()
{
    printf("Enter the number of players: ");
    int num;
    scanf("%d", &num);

    int temp = 1;
    struct player players[num];
    struct player temporary_player;
    //data entry
    int i,j;
    printf("Enter the details of the players: ");
    for(i = 0; i < num; i ++)
    {
        printf("Player %d \n", i+1);
        printf("Name: ");
        scanf("%s", &players[i].name);
        printf("Total matches played: ");
        scanf("%d", &players[i].totMatPlayed);
        printf("Best bowling figure: ");
        scanf("%f", &players[i].bstBowlFig);
    }
    for(i = 0; i < num; i ++)
    {
        for(j = i; j < num; j ++)
        {
            if(players[j].bstBowlFig > players[i].bstBowlFig)
            {
                temporary_player = players[j];
                players[j] = players[i];
                players[i] = temporary_player;
            }
        }
    }
    //display
    printf("The scores: \n");
    for(i = 0; i < num; i ++)
    {
        printf("Name: %s Total Matches Played: %dBest Bowling Figure: %f \n", players[i].name, players[i].totMatPlayed, players[i].bstBowlFig);
    }
    //deleting data entry
    printf("\nEnter the name of the player you want to delete from the records: ");
    char del_name[20];
    scanf("%s", &del_name);
    //deleting for loop
    int status = 0;
    char delete_status = 'N';
    for(i = 0; i < num; i++)
    {
        if(strcmp(del_name, players[i].name) != 0 || status == 0)
        {
            continue;
        }
        else
        {
            status = 1;
            players[i] = players[i+1];
        }

    }
    //display
    for(i = 0; i < num-1; i ++)
    {
        printf("Name: %s Total Matches Played: %dBest Bowling Figure: %f \n", players[i].name, players[i].totMatPlayed, players[i].bstBowlFig);
    }
    //Traversing
    printf("Enter the name of the player you want to search: ");
    char name[20];
    scanf(name);
    for(i = 0; i < num-1; i ++)
    {
        if(strcmp(players[i].name, name) == 0)
        {
            printf("Data Found");
        }
    }

}
