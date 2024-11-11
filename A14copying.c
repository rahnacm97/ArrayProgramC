#include<stdio.h>
int main(){
    int i,a[10],n,b[10];
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
    for(i=0;i<n;i++){
        b[i] = a[i];
    }
    printf("\nThe 2nd array:\n");
    for(i=0;i<n;i++){
            printf("%d ",b[i]);
    }
    return 0;
}