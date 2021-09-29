#include <stdio.h>

int main()
{
    char a;
    printf("Enter the Character:\n");
    scanf("%c", &a);
    if (a>=65 && a<=90)
    {
        printf("Entered character is Capital case alphabet");
    }
    else if (a>=97 && a<=122)
    {
        printf("Entered character is Small case alphabet");
    }
    else if ((0 <= a && c <= 47) || (58 <= c && c <= 64) || (91 <= c && c <= 96) || (123 <= c && c <= 127))
    {
        printf("Your input is a special character");
    }
    else if (a>=48 && a<=57)
    {
        printf("Your input is a  number");
    }
    else
    {
        printf("Invalid innput");
    }
    return 0;
} 