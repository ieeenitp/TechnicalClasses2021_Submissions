# Solution of Question 2


```#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count++;
        }
    }
    printf("Array after segregation: ");
    for(int i=0;i<n;i++){
        if(i<count){
            printf("0 ");
        }
        else{
            printf("1 ");
        }
    }
    return 0;
}
