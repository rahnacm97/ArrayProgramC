#include<stdio.h>
int main(){
    int i,j,k,n,temp,a[50];
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The array:\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    int min =0;
    for(i=1;i<n;i++){
        if(a[i]<a[min]){
            min = i;
        }
    }
    for(i=min;i<n-1;i++){
        a[i] = a[i+1];
    }
    n--;
    printf("\nArray After deletion:\n");  
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}