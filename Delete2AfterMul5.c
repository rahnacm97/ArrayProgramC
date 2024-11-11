#include<stdio.h>
int main(){
    int i,j,n,a[50];
    int index=0;
    printf("Enter the size of the arraay:");
    scanf("%d",&n);
    printf("\nEnter array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%5 ==0){
            a[index++] = a[i];
            if(i+2<n){
                i += 2;
            }
        }else{
            a[index++] = a[i];
        }
    }
    n = index;
    printf("\nthe new array is,\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}