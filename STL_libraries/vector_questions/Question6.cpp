// lower bound of the element in the array

// input=[-1,-1,2,3,5]
//         val=4
// output=3

#include<iostream>
#include<vector>
using namespace std;
int lowerbound(vector<int>v,int val){
int lm=v.size();
int s=0;
int e=(lm-1);
int ans=-1;


while(s<=e){
int mid=(s+e)/2;

    if(val<v[mid]){

        e=mid-1;
    }
    else{
        ans=v[mid];
        s=mid+1;
    }
}
return ans;
}

int main(){
vector<int>v(5);
for(int i=0;i<5;i++){
cin>>v[i];
}
int val;
cin>>val;

cout<<lowerbound(v,val);

}