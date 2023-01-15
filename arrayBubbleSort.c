#include<stdio.h>
void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("index %d\t = value %d\n",i,arr[i]);
    }
}
int main()
{
    int arr[] = {3,5,4,7,6,9,2,8,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Before:\n");
    print(arr,n);
    
    printf("\nAfter sorting according to accedent order:\n");
    for(int i = 1; i < n; i++){
        for(int j = 0, k = 1; j < n-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
            printf("%d sort %d check:\n\n",i+1,k);
            k++;
            print(arr,n);
            printf("\n");
        }
    }
    
    
    return 0;
}
