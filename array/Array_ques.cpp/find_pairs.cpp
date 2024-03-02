#include<iostream>
#include<algorithm>
using namespace std;
int find_pairs(int arr[],int n,int d){
    sort(arr,arr);
    int count=0;
    for(int i=0;i<n-1;){
    if(arr[i+1]-arr[i]<=d)    {
        count++;
        i+=2;
    }
    else{
        i++;
    }
    }
    return count;
}
int main(){
    int n=5;
    int arr[5]={1,3,3,9,4};
    int d=2;
    cout<<find_pairs(arr,n,d);

}

// output=2

