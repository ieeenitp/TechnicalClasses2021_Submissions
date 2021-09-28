#include<stdio.h>

int main()
{

     float b=0, a=1, c=0;
     int i=0;
 printf("Sum of the required series is:\n");
    for( i = 1 ; i < 8 ; i++){
        a*=i;
        b= (float) i/a;
        c+=b;
        printf("%f  ",b);
         if(i<7)
             printf(" + ");
     
    }

    printf("\n = %f",c);

    return 0;
}