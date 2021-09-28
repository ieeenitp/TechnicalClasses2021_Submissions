```
#include<stdio.h>
int main()  
{  
    int count;  
    float sum = 0.0, fact;  
  
    
    for (int num = 1; num <=7 ; num++)
    {
        fact = 1;  
        for(count = 1; count <= num; count++)  
        {  
            fact = fact * count;  
        }  
  
        sum = sum + (num / fact);  
    }  
  
    printf("Sum of series is %f\n", sum);  
  
    return 0;  
}
```