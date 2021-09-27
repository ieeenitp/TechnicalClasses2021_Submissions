##  Solution code of Question 2 <br/>

#include <stdio.h> <br/>
<br/>
int main()<br/>
{<br/>
    int y;<br/>
    float x,i;<br/>
    printf("The Table of  y, x, i is:\n");<br/>
    printf("y \t x \t i \n");<br/>
    for(y=1 ; y<=6 ; y++)<br/>
    {<br/>
        for(x=5.5 ; x<=12.5 ;x+=0.5)<br/>
        { <br/>
           i=2+y+0.5*x;<br/>
        printf("%d \t %.2f \t %.2f  \n",y,x,i);<br/>
    <br/>
        }<br/>
    }<br/>
        return 0;   <br/>
}<br/>

