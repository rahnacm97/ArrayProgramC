#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,4,5,5,6,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i,j;
    printf("The unique elements in the array is:\n");
    for(i=0;i<size;i++){
        int isUnique=1;
        for(j=0;j<i;j++){
            if(arr[i]==arr[j]){
                isUnique = 0;
                break;
            }
        }
        if(isUnique){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}