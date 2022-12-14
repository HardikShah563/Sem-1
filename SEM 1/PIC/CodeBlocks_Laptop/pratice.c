#include <stdio.h>
void main()
{
    int a, b, c, d;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    d = (a > b)? (a > c)? a : c : b;
    printf("%d", d);


    if(a > b)
    {
        if(a > c)
        {
            d = a;
        }
        else
        {
            d = c;
        }
    }
    else
    {
        d = b;
    }
    printf("%d", d);
}
