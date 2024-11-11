#include<stdio.h>
int main(){
    int i,j,n,a[100];
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The array elements:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}