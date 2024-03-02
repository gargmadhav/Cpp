// to find the element that how many times it got repeated and it must be greater then the n/2 n=size of arr
#include<iostream>
using namespace std;
int majority_ele(int* a,int n){
    for(int i=0;i<n;i++){
        int count =0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                count++;

            }
        }
        if(count>(n/2)){
            return a[i];
        }
        
    }
    return 0;
}
int main(){
int a[]={3,3,4,2,4,4,2,4,4};
int n=9;
// cin>>n;
cout<<majority_ele(a,n);
}

// output=4;