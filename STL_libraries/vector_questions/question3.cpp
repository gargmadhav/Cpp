// to check the given array is sorted or not
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(6);
   
    // input of the array
    for(int i=1;i<6;i++){
        cin>>v[i];
    }

    // output and condition of the array
    bool flag=true;
    for(int i=1;i<v.size();i++){
        if(v[i]<=v[i-1]){
            flag=false; 
        }
    }
    cout<<flag; 
}