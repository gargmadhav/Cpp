// #include<iostream>
// using namespace std;
// int binary_search(int arr[][4],int key){
//     int flag=true;
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             if(arr[i][j]==key){
//                 return flag;
//             }
//             else{
//                 return false;
//             }
//         }
//     }
// }
// int main(){
//     int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//     int key=3;
//     binary_search(arr,key);

// }
#include<iostream>
using namespace std;
int binary_search(int arr[4][4],int key){
    int n=4,m=4;
    int s=0;
    int e=n*m-1;
    int flag=true;
    int mid=(s+e)/2;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[mid]==key){
                return flag;
            }
            else if(arr[mid]<key){
                s=mid+1;
                
                // return key;
            }
            else if(arr[mid]>key){
                e=mid-1;
            }
            else{
                return no;
            }
        }
    }

}