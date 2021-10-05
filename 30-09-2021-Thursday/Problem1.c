#include <stdio.h>

int main()
{
    int a=3, b=4,c;

    c=b-a;

    switch(c)
    {
        case 1||2: 
        printf("God give me chance to change things\n");
            break;
         // case a||b: // case label does not reduce to an integer constant
         case 3: // since a=3
        printf("God give me a chance to rum my show\n");
            break;       
        case 4: // since b=4
        printf("God give me a chance to rum my show\n");
            break;            
    }
    return 0;
}

// Output: God give me chance to change things