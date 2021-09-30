#include <stdio.h>
int main()
{
    char c;
    printf("Ente a input:");
    scanf("%c", &c);
    if (65 <= c && c <= 90)
    {
        printf("Your input is a capital letter");
    }
    else if (97 <= c && c <= 122)
    {
        printf("Your input is a small letter");
    }
    else if ((0 <= c && c <= 47) || (58 <= c && c <= 64) || (91 <= c && c <= 96) || (123 <= c && c <= 127))
    {
        printf("Your input is a special character");
    }
    else if (48 <= c && c <= 57)
    {
        printf("Your input is a  number");
    }
    else
    {
        printf("Invalid innput");
    }
    return 0;
}