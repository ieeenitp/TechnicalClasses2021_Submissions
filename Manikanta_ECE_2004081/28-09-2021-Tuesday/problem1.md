## Code 
#include<stdio.h> <br/>
<br/>
int main()<br/>
{<br/>
<br/>
    printf("Sum of the required series is:\n"); <br/>
    float  a=1,b=0,c=0;<br/>
    int i;<br/>
<br/>
    for( i = 1 ; i <=7 ; i++)<br/>
    {<br/>
        a *= i;<br/>
        b +=  (float) i/a;<br/>
        c+=b;<br/>
        printf("%f ",b);<br/>
        if(i<7>)<br/>
        printf(" + ");<br/>
    }
   
    printf("\n = %f",c);<br/>
<br/>
    return 0;<br/>
}<br/>
<br/>

## Output : 
Sum of the required series is: <br/>
1.000000   + 1.000000   + 0.500000   + 0.166667   + 0.041667   + 0.008333   + 0.001389  <br/>
 = 2.718056<br/>