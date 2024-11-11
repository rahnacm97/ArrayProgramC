#include<stdio.h>
int main(){
    int i,n,a[50];
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("\nEnter the array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nAlternate array elements are:\n");
    for(i=1;i<n;i+=2){
        printf("%d ",a[i]);
    }

    return 0;
}