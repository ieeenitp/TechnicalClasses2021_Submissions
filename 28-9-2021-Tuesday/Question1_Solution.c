#include<stdio.h>

int main()
{
    
    static double q, p=1;

    for(int i = 1 ; i < 8 ; i++){
        p=p*i;
        q= q + (double)(i)/p;
    }
    printf("%lf\n",q);

    return 0;
}

// Output :  2.718056