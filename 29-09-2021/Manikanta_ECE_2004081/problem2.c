#include <stdio.h>

int main()
{
    char a;
    printf("Enter the Character:\n");
    scanf("%c", &a);
    if (a>=65 && a<=90)
        printf("Entered character is CAPITAL CASE ALPHABET");
    else if (a>=97 && a<=122)
        printf("Entered character is SMALL CASE ALPHABET");
    else if (a>=48 && a<=57)
        printf("Entered character is NUMBER");
    else if ((a>=0 && a<=47) || (a>=58 && a<=64) || (a>=91 && a<=96) || (a>=123 && a<=127))
        printf("Entered character is SPECIAL CHARACTER");
    else
        printf("INVALID Character");
    
    return 0;
} 