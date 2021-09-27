##  Corrected code of Question 1 <br/>

#include <stdio.h> <br/>

int main() <br/>
<br/>
{ <br/>
<br/>
    int i=4, j=-1, k=0, w, x, y, z; <br/>
    w=i || j || k; <br/>
    x = i && j && k; <br/>
    y= i || j && k; <br/>
    z = i && j || k; <br/>
printf ( "w = %d x = %d y = %d z = %d\n", w, x, y, z);<br/>
<br/>
<br/>
} <br/>
return 0; <br/>

}<br/>
<br/>

## Output: w = 1  x = 0  y = 1  z = 1  <br/>