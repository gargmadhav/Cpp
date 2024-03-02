#include<iostream>
using namespace std;
int wave_printing(int arr[][4],int n,int m){
    for(int j=m-1;j>=0;j--){
        if( j%2==1 ){
            for(int i=n-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    else{
            for(int i=0;i<n;i++){
                cout<<arr[i][j]<<" ";
            }
        } 
        cout<<endl;  
    }
}
int main(){
    int n=4,m=4;
    int arr[4][4]={{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
wave_printing(arr,n,m);
}

// 16 12 8 4 
// 3 7 11 15
// 14 10 6 2
// 1 5 9 13