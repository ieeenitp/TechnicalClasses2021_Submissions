#include <stdio.h>
int main()
{
    int n,i,j;
    printf("Input the size of inverted half pyramid :\n");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=0;j<=i-1;j++)
        {
            printf("%d",j+1);
        }

            printf("\n");
    }
}