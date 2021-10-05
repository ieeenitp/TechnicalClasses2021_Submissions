#include<stdio.h>
#include<conio.h>
int main()
{
    int num, r, res=0, oct=0, tem=0;

    printf("Enter an integer: ");
    scanf("%d", &num);
    r = num;

    while(r!=0)
    {
        res = res*10 + r%8;

        if(res == 0)
        {
            tem=1;
        }

        r = r/8;
    }

    while(res!=0)
    {
        oct = oct*10 + res%10;
        res = res/10;
    }

    if (tem == 1)
    {
        oct = oct*10;
    }

    printf("The octal of %d is %d.",num, oct);

}