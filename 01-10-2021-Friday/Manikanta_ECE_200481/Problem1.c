# include <stdio.h>

int main()
{
    int a=3 , b = 4, c;

    c=b-a;

    switch (c)
    {
// case label shoud be an integer constant so rewriting the code will be 
    case 1:
        printf ("God give me chance to change things\n");
            break;
    case 2:
        printf ("God give me chance to change things\n");
            break;
    case 3: //since a=3 
        printf ("God give me a chance to run my show\n");
            break;
     case 4: //since b=4 
        printf ("God give me a chance to run my show\n");
            break;
    }
    return 0;
}

// Output: God give me chance to change things