// finding the unique element in the array...
#include<iostream>
using namespace std;
int uniqe_no(int arr[],int n){
    for(int i=0;i<n;i++){
        int count =0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }

        }
        if(count==1){
            return arr[i];
        }
    }
}
int main(){
int arr[6]={2,2,3,4,3,3};
cout<<uniqe_no(arr,6);
}