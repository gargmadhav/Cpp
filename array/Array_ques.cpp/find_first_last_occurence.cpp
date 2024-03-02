// // to find the first and last occurence of the number

#include<iostream>
using namespace std; 
int first_occurence(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans= mid;
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;
}

int last_occurence(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int ans=-1;
    while(s<e){
        if(arr[mid]==key){
            ans= mid;
            s=mid+1;
        }
        if(arr[mid]>key){
            e=mid-1;
        }
        if(arr[mid]<key){
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<first_occurence(arr,n,key)<<endl;
    cout<<last_occurence(arr,n,key);
    

}