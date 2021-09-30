#include<stdio.h>
int main()
{
	int n=1,i=0;
	float sum=0,fact=1;
	while(n<=7)  {
		for(i=1;i<=n;i++) {
			fact=fact*i;
		}
        sum=sum+n/fact;
        n++;
	}
    printf("%f\n",sum);
    return 0;
}