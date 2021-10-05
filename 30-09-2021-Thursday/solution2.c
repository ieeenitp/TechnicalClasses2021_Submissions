#include <stdio.h>

int main()
{
    int n,oct_eq=0, factor=1;

    printf("Enter the number:\n");
    scanf("%d",&n);

    while(n != 0)
    {
        oct_eq = oct_eq + (n%8)*factor;
         n = n/8;
         factor *= 10;
    }

        printf("The octal equivalent of the number is: %d\n",oct_eq);

     return 0;
}
