#include<stdio.h>
void swap(int *x,int *y){
   int temp = *x;
   *x = *y;
   *y = temp;
}
int main(){
    int i,j,a[50],n,k;
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\n array elemnets are:\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\nThe sorted array is:");
    for(i=0;i<n;i++){
        int min = i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min = j;
            }
            if(min != i){
                swap(&a[i],&a[min]);
            }
        }
        printf("%d ",a[i]);
    }
    printf("\nEnter the kth no:");
    scanf("%d",&k);
    printf("The %dth largest value is :%d\n",k,a[n-k]);
    printf("The %dth smallest value is :%d",k,a[k-1]);

    return 0;
}