// rotate matrix by 90 degree

#include<iostream>
using namespace std;
int rotate_mat(int arr[][4],int n,int m){
    for(int j=0;j<m;j++){
        if(j%2==1 && j==m){
            for(int i=0;i<n;i++){
                cout<<arr[i][j]<<" ";
            }
            
        }
        else{
            for(int i=n-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
        
        
        cout<<endl;
    }
}
int main(){
    int n=4,m=4;
    int arr[4][4]={{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    rotate_mat(arr,n,m);
}