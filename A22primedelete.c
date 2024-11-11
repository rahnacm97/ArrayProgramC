  
#include <stdio.h>
int main() {
    int i, j, k, n;
    printf("Enter the array size :");
    scanf("%d",&n);
    int arr[50];
    printf("Enter the array elements :\n");
    for(i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    printf("After process :\n");
    for(i = 0; i < n; i++) {
        int flag = 1;
        for(j = 2; j <= arr[i]/2; j++) {
            if(arr[i]%j == 0) {
                flag=0;
                break;
            }
        }
        if(flag == 1 && arr[i] > 1){
            for(k = i; k < n-3; k++) {
                arr[k+1] = arr[k+3];
                arr[k+2] = arr[k+4];
            }
            n -= 2;
        }
        if(arr[i]%2 == 0) {
            arr[i] = 0;
        }
        printf("%d  ",arr[i]);
    }
    return 0;
}