#include <stdio.h>

int main()
{

    int i = 4, j = -1, k = 0;
    int w, x, y, z;
    w = i || j || k;
    x = i && j && k;
    y = i || j && k;
    z = i && j | k;
    printf("w = %d \nx = %d \ny = %d \nz = %d\n", w, x, y, z);

    return 0;
}


// output


//  w = 1 
// x = 0 
// y = 1 
// z = 1