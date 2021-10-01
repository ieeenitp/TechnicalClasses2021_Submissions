#include<stdio.h>
#include<math.h>

int main()
{
    int num,var=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    int n = num;
    for(int i = 0 ; num!=0 ;num = num/8){
        var = (num%8)*pow(10,i)+var;

        i++;
    }
    printf("Octal equivalent of %d is %d\n",n,var);
    return 0;
}
