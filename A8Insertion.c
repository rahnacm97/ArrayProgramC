#include<stdio.h>
int main(){
    int i,n,a[50],new,pos;
    printf("Enter the array size:");
    scanf("%d",&n);
    if(n>50)
    { 
        printf("Overflow");
        return 1;
    }
    else{
    printf("Enter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The array elements:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }}
    printf("\nEnter the value that you need to insert:");
    scanf("%d",&new);
    printf("\nEnter the position that you need to insert %d:",new);
    scanf("%d",&pos);
    if(pos < 0||pos > n+1){
        printf("invalid position");
        return 1;
    }else{
    for(i=n-1;i>=pos-1;i--){
        a[i+1] = a[i];
    }
    a[pos-1] = new;
    n++;
    printf("\nNew array is:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    }
    return 0;
}