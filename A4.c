#include<stdio.h>
int main(){
    int i,a[10];
    int even=0,odd=0;
    printf("Enter the array elements:");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        if(a[i]%2==0){
            even = even + 1;
        }else{
            odd = odd +1;
        }
    }
    printf("even no count is %d",even);
    printf("odd no count is %d",odd);
    return 0;
}