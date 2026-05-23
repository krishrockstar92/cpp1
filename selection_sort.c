#include<stdio.h>
void selection_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        int t= arr[mini];
        arr[mini]=arr[i];
        arr[i]=t;
    }

}
int main(){
    printf("Enter the array size:");
    int n;
    scanf("%d",&n);
    printf("Enter the array elements");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    selection_sort(arr,n);
    printf("Sorted array elements are:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;

}