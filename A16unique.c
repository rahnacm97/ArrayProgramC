#include<stdio.h>
int main(){
    int i;
    int arr[ ] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int freq[50] = {0};
    for(i=0;i<size;i++){
        freq[arr[i]]++;
    }
    for(i=0;i<size;i++){
        if(freq[arr[i]]==1){
            printf("%d ",arr[i]);
        }
    }


    return 0;
}