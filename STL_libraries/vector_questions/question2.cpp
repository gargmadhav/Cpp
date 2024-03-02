// cout the number of elements strictly greater than the value x

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(6);
    // input of the array
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    // input of the number
    cout<<"Enter x";
    int x;
    cin>>x;

    // output and condition
        int count=0;
    for(int i=0;i<v.size();i++){
        if(x<v[i]){
            count++;
        }
    }
        cout<<count;
    
}

// input=
// 2 4 6 12 20 26
// Enter x11
// output=
// 3