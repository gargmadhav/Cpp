// return true if the number of occuurence of the given array is unique

// #include<iostream>
// using namespace std;
// int unique_occurence(int arr[],int n){
//     int flag=true;
//     for(int i=0;i<n;i++){
//         int count=0;
//         for(int j=0;j<n;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }

//         } 
//         if(count!=count++){
//             cout<<"true";

//         }
//         else{
//             cout<<"False";
//         }
//         return arr[i];
//     }

// }
// int main(){
// int arr[11]={2,2,4,4,4,1,3,3,3,4,3};
// cout<<unique_occurence(arr,11);
// }

#include<iostream>
using namespace std;
int unique_occurence(int arr[],int n){
    for(int i=0,k=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            cout<<k;
        }
        cout<<endl;
        if(count!=count++){
            cout<<"true";

        }
        else{
            cout<<"False";
        }
        return arr[k];  

    }
}
int main(){
int arr[11]={2,2,4,4,4,1,3,3,3,4,3};
cout<<unique_occurence(arr,11);
}
