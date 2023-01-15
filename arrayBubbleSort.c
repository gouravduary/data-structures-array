#include<stdio.h>
void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("index %d\t = value %d\n",i,arr[i]);
    }
}
int main()
{
    int arr[] = {7,9,5,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Before:\n");
    print(arr,n);
    
    printf("\nAfter sorting according to accedent order:\n");
    for(int i = 0; i < n; i++){
        for(int j = i+1,k=1; j < n; j++){
            if(arr[i]>arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
            printf("%d sort %d check:\n\n",i+1,k);
            k++;
            print(arr,n);
            printf("\n");
        }
    }
    
    
    return 0;
}
