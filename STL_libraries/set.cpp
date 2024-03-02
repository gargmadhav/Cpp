#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
//     s.insert(3);
//     s.insert(4);
//     s.insert(2);
//     s.insert(1);
// for(auto i:s){
//     cout<<i<<" ";
// }
// cout<<endl;

//  it will print it in the sorted way
/*************************************************/
s.insert(3);
s.insert(3);
s.insert(3);
s.insert(0);
s.insert(6);
s.insert(6);
s.insert(7);
s.insert(6);
for(int d:s){
    cout<<d<<" ";
}
cout<<endl;
// in set there will be no duplicacy of the elements which is inserted......
/***************************************/
s.erase(s.begin());
for(auto i:s){
    cout<<i<<endl;
}
/***************count to check the number is present or not*******************/
cout<<"7 is present or not ===>>> "<<s.count(7)<<endl;
/*******************find***************************/
set<int>:: iterator  itr=s.find(7);
cout<<"value present at itr"<< *itr<<endl;
}