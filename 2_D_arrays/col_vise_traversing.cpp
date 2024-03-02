// travesing the array column vise

#include<iostream>
using namespace std;
int main(){
    int arr[2][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cin>>arr[j][i];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
    cout<<arr[i][j]<<" ";
            // cin>>arr[i][j];
        }
        cout<<endl;
    }

}
// 1 2 3 4 5 6
//output=
//  1 3 5
// 2 4 6