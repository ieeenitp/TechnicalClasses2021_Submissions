#include<stdio.h>
int main()
{
    int y; float i, x;
    printf("  y\t x\t i\t \n"); 

    for(y=1;y<=6;y++){
    	for(x=5.5;x<=12.5;x=x+0.5) {
             i = 2+(y+0.5*x);
            printf(" %d\t %0.2f\t  %0.2f\t \n ",y,x,i);
        }
    }
    return 0;
}