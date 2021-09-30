#include <stdio.h>
int main() {
    int n ,i=1;
    float sum, fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);


        for (i = 1; i <= n; ++i)
        {
            fact= fact*i;
            sum=sum+ (i/fact) ;
        }

        printf("Sum of series is %f", sum);

    return 0;
}
