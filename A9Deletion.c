#include<stdio.h>
int main(){
    int i,n,pos,a[50];
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("\nEnter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nThe array elements:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\nFrom which position do you want to delete the element?");
    scanf("%d",&pos);
    if(pos<=0||pos>n){
        printf("invalid position");
        return 1;
    }else{
    for(i=pos-1;i<=n;i++){
        a[i] = a[i+1];
    }
    n--;
    printf("\nNew array is:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }}
    return 0;
}