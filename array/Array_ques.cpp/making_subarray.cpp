#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<a[j]<<" ";
        }
    }
}
// 5
// 1 2 0 7 2
// output= 1 2 0 7 2 2 0 7 2 0 7 2 7 2 2