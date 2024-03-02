#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int ,string> m;
    m[1]="madhav";
    m[2]="garg";
    m[13]="mummuy";
    m.insert({5,"bheem"});
    for(auto i:m){
        cout<<i.first<<" "<< i.second<<endl;
    }  
    cout<<"finding 13 "<<m.count(13)<<endl;
    // 1 meaning true
    cout<<endl;
    cout<<"before erase"<<endl;
    for(auto i:m){
        cout<< i.first<<" "<<i.second<<endl;
    }

    cout<<endl;
    m.erase(13);
    cout<<"after erase"<<endl;
for(auto i:m){
        cout<< i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    /*************find****************/
    auto it=m.find(5);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
}
