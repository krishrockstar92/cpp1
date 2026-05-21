#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        int didswap=0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int t = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=t;
                didswap=1;
            }
        }
        if(didswap==0){
            break;
        }
       // cout<<"runs\n"; didswap optimizes the code for best TC O(n)
    }

}
int main(){
    int i,n,arr[n];
    cout<<"Enter the number of elements in the array:";
    cin>>n;
    cout<<"Enter the array elements:";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort(arr,n);
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}