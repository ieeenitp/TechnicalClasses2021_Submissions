## Solution of Question 1
```
#include<stdio.h>

int main(){
  float sum=0,fact=1;
  for(int i=1;i<=7;i++){
      fact*=i;
    sum+=i/fact;
  }
  printf("%0.2f ",sum);
  return 0;
}
```