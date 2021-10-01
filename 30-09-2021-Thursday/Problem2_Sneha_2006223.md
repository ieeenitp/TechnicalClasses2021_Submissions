
<pre># include <stdio.h>
int main()
{
int a[20];
int num, j=0;
printf("Enter a decimal number : ");
scanf("%d",&num);
while(num>0){
  a[j]=num%8;
  j++;
  num=num/8;
}
printf("Equivalent octal number : ");
for(int k=j-1;k>=0;k--){
    printf("%d",a[k]);
}
return 0;
}
