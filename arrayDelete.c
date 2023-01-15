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
    printf("Enter the number you want to delete\t");
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
    while(pos<n) {
        arr[pos] = arr[pos+1];
        pos++;
    }
    print(arr,n-1);

    return 0;
}
