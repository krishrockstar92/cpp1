#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the array size";
    int n,i,arr[n],m;
    cin>> n;
    cout <<"Enter the array elements";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched";
    cin>>m;
    for(i=0;i<n;i++){
        if(arr[i]==m){
            cout<< i;
        }
    }



}