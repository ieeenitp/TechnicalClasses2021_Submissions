#include <stdio.h>

int main()
{
    int a = 3, b = 4, c;

    c = b - a;

    switch (c)

    {

    case 1 || 2:
        printf("God give me chance to change things\n");
        break;

   // case a || b: //this line give error because in switch stament the "c" is integer and here we giving characters
        printf("God give me a chance to run my show\n");

        break;
    }

    return 0;
}