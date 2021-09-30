#include <stdio.h>
#include<conio.h>
int main ()
{
    char ch;
    int x;

    printf("Enter a character: ");
    scanf("%c", &ch);

    x = ch;

    printf("The ASCII value of %c is: %d\n",ch,x);


    if (x>= 97 && x<=122)
        printf("%c is a small letter");

    else if (x>= 65 && x<= 90)
        printf("%c is a capital letter");

    else if (x >=48 && x <= 57)
        printf("%c is a digit");

    else if (x>=0 && x<=47 || x>=58 && x<=64 || x>=91 && x<=96 || x>=123 && x<=127)
        printf("%c is a special symbols");


}
