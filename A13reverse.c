#include<stdio.h>
int main(){
    int i,a[10],n;
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++){
            scanf("%d",&a[i]);
    }
    printf("The array elements:\n");
    for(i=0;i<n;i++){
            printf("%d ",a[i]);
    }
    printf("\nThe array after reversing:\n");
    for(i=n-1;i>=0;i--){
            printf("%d ",a[i]);
    }
    return 0;
}