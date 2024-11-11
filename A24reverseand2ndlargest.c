#include<stdio.h>
int main(){
    int i,j,n,a[50],temp,k;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("\nEnter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nThe reversed array is:");
    for(i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
    printf("\nEnter which largest position you have to check:");
    scanf("%d",&k);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[j]<a[i]){
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    
    }
    printf("The %dth largest number is %d",k,a[n-k]);
    
    return 0;
}