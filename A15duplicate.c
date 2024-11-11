#include<stdio.h>
int main(){
    int i,j,n,arr[50];
    int count = 0;
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                count++;
                break;
            }
        }
    }
    printf("\nThe count of duplicate values are %d",count);
    return 0;
}