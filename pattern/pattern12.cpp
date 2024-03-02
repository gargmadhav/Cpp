// butterfly pattern.............
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // ye upper body ke lie hai
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        int space=2*n-2*i;
        for(int j=0;j<space;j++){
            cout<<"-";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    // ye lower body ke lie hau
    for(int i=n;i>=0;i--){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        int space=2*n-2*i;
        for(int j=0;j<space;j++){
            cout<<"-";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        
    }
        cout<<endl;
    }
}

// 5
// *----------*
// **--------**
// ***------***
// ****----****
// *****--*****
// ************
// ************
// *****--*****
// ****----****
// ***------***
// **--------**
// *----------*