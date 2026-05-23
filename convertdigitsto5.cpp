#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the number of digits:";
    int n;
    cin>>n;
    cout<<"Enter the digits:";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Digits after conversion are:";
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            arr[i]=5;
        }
        cout<<arr[i]<<" ";
    }
}
