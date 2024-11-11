#include<stdio.h>
int main(){
    int i,n,a[50],even[50],odd[50];
    int se,so;
    int j=0,k=0;
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("\nEnter the array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nThe array is,\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    for(i=0;i<n;i++){
    if(a[i]%2==0){
        even[j] = a[i];
        j++;
    }else{
        odd[k] = a[i];
        k++;
    }}
    se = j;
    so = k;
    printf("\nThe seperated even array is:\n");
    for(j=0;j<se;j++){
        printf("%d ",even[j]);
    }
    printf("\nThe seperated odd array is:\n");
    for(k=0;k<so;k++){
        printf("%d ",odd[k]);
    }
    return 0;
}