#include<stdio.h>
void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("index %d\t = value %d\n",i,arr[i]);
    }
}
int main()
{
    int arr[] = {1,3,5,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Before:\n");
    print(arr,n);
    printf("Enter the number you want to update\t");
    int num;
    scanf("%d",&num);
    int pos;
    int i = 0;
    while(i<n) {
        if(num == arr[i]) {
            pos = i;
        }
        i++;
    }
    printf("Enter the number you want to place\t");
    int number;
    scanf("%d",&number);
    while(i<n) {
        if(num == arr[i]) {
            pos = i;
        }
        i++;
    }
    arr[pos] = number;
    print(arr,n);
    return 0;
}
