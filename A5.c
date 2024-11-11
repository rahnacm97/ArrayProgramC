#include<stdio.h>
int main(){
    int i,a[5],b[5],c[5];
    printf("Enter the first array elements:");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("\nEnter the 2nd array elements:");
    for(i=0;i<5;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++){
        c[i] = a[i] + b[i];
    }
    printf("\nThe third array elements are:\n");
    for(i=0;i<5;i++){
        printf("%d ",c[i]);
    }
    return 0;
}