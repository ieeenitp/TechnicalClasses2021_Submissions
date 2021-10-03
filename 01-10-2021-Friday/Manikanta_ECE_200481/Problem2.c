#include <stdio.h>
int main()
{
    int i,n,count=0;
    printf("Input the size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Input the array elements 'ONLY 0s and 1s':\n");
    for(i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]=='0')
        count++;
    }
    for(i=0;i<n;i++){
        if(i<count)
            arr[i]=0;
        else
        arr[i]=1;
    }
    printf("Segrigatted array is:\n");
    for(i=0;i<n;i++){
       printf("%d",arr[i]);
    }
    return 0;
}