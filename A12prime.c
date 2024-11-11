#include<stdio.h>
int main(){
    int num;
    printf("Enter a num:");
    scanf("%d",&num);
    if(num%2==0){
        printf("%d is not a prime number.",num);
    }else{
        printf("%d is prime number.",num);
    }
    return 0;
}
