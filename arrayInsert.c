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
    printf("\nEnter the number you want to insert\t");
    int num;
    scanf("%d",&num);
    
    int x;
    printf("Enter the position you want to insert\t");
    scanf("%d",&x);
    int i = n;
    while(i>=x) {
        arr[i] = arr[i-1];
        i--;
    }
    arr[i] = num;
    print(arr,n+1);

    return 0;
}
