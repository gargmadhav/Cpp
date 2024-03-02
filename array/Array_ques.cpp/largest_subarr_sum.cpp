// largest_subarray sum
#include<iostream>
using namespace std;
int max_sub_arr(int arr[],int n){
    int max=INT8_MIN;
    int k=0;
    for(int i=0;i<n;i++){
        k=k+arr[i];
        if(max<k){
            max=k;
        }
        if(k<0){
            k=0;
        }
    }
    return k;
}

int main(){
int arr[]={-2,-3,4,-1,-2,1,5,3};
int n=7;
cout<<max_sub_arr(arr,n);
}