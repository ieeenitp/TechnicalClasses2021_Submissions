```
#include <stdio.h>

int main(){



int j=4 j = -1 k=0,w,x,y,z;  here coma is missing and two times defined value of j which is not posible 
w=i || j || k;
x = i && j && k;
y= i || j && k;
z = i && j | k;
printf ( "w = %d x = %d y = %d z = %d\n", w, X,Y, Z); 
//here X,Y,Z are note defined they should be x,y,z respectively  



return 0;

}
```
<h1>Here is correct program </h1>

```
#include <stdio.h>

int main()
{

    int j = 4 , j = -1 ,k = 0, w, x, y, z;
    w = i || j || k;
    x = i && j && k;
    y = i || j && k;
    z = i && j | k;
    printf("w = %d x = %d y = %d z = %d\n", w, x, y, y);

    return 0;
}
```