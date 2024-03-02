// // palindrone pattern

#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=n;j++){
//                 if(j<=n-i){
//                     cout<<"-";
//                 }
//                 else{
//                     cout<<n-j;
//                 }          
//             }
//             cout<<endl;

//         }
    
// }

int main(){
    int n;
    cin>>n;
    for(int i=n;i>=0;i--){
        for(int j=2;j<=n-i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}