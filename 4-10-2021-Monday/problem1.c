#include <stdio.h>

int main()
{
    int n,factor=1,oct_num=0;

    printf("Input the number:\n");
    scanf("%d",&n);
    printf("Octal equivalent of number '%d' is:\n",n);
    while(n != 0)
    {
        oct_num += (n%8)*factor;
         n = n/8;
         factor *= 10;
    }
        printf("%d",oct_num);

     return 0;
}