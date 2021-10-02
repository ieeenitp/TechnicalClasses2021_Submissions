#include <stdio.h>

int main()
{
    int a[10],c=0,i,n;
    printf("enter size:");
    scanf("%d",&n);
    printf("enter the numbers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            c++;
        }
    }
    for(i=0;i<c;i++)
    {
        a[i]=0;
    }
    for(i=c;i<n;i++)
    {
        a[i]=1;
    }
    printf("segregation of array of 0 and1:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}