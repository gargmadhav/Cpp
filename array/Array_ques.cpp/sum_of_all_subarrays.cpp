#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            // cout<<arr[j]<<" ";
            m+=arr[j];
            cout<<m<<" ";
        }
    }
}
// 5
// 1 2 0 7 2
//output= 1 3 3 10 12 14 14 21 23 23 30 32 39 41 43