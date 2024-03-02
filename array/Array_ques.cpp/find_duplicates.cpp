// find the duplicates in the array



#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n=10;
    // cin>>n;
    int arr[100]={2,2,4,4,9,9,5,5,6,7,8,1};
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        int count=1;
        
            while(arr[i]==arr[i+1]){
                i++;
                count++;
            }
        
        if(count>1){
            cout<<arr[i];
        
        }
    }

}