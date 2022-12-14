#include <stdio.h>
#include <string.h>

char reVal(int num)
{
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
    else
        return (char)(num - 10 + 'A');
}

void rev(char *str)
{
    int len = strlen(str);
    int i;
    for (i = 0; i < len/2; i++)
    {
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}

char* fromDeci(char res[], int base, int input)
{
    int index = 0;
    while (input > 0)
    {
        res[index++] = reVal(input % base);
        input /= base;
    }
    res[index] = '\0';
    rev(res);
    return res;
}

int main()
{
    int input, base;
    printf("Enter The Decimal Number : ");
    scanf("%d", &input);
    printf("Enter The Base in which the number is to be converted: ");
    scanf("%d", &base);
    if(base > 9)
    {
        printf("The base isn't a single digit number. ");
    }
    char res[100];
    printf("\n\nEquivalent of %d in base %d is %s\n", input, base, fromDeci(res, base, input));
    return 0;
}
