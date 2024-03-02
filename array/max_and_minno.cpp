#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxno = INT8_MIN;
    int minno=INT8_MAX;
    for(int i=0;i<n;i++){
        // if(arr[i]>max){
        //     max=arr[i];
        // }
        // if(arr[i]<min){
        //     min=arr[i];
        // }
        maxno=max(maxno,arr[i]);
        minno=min(minno,arr[i]);
        cout<<maxno;
        cout<<minno;
    }
}