#include<stdio.h>

int main()
{
    int arr1[10]={0,1,0,1,0,0,1,0,1,0};
    int zero=0,one=0;
    for(int i = 0 ; i<10 ;i++){
        printf("%d\t",arr1[i]);
        if(arr1[i]==0){
            zero++;
        }
        else{
            one++;
        }
    }
    printf("\n");
    for(int i = 0 ; i<zero ; i++){
        arr1[i]=0;
    }
    for(int i = zero ; i<zero+one ; i++){
        arr1[i]=1;
    }
    for(int i = 0 ; i < 10 ; i++){
        printf("%d\t",arr1[i]);
    }
     printf("\n");
    return 0;
}
