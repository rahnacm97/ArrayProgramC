#include<stdio.h>
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int i,j,n,a[100];
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("\nEnter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nThe array elements:");
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

return 0;
}