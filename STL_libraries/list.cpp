#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;

    /*how to copy the list into the new list*/
    list<int> n(l);

// 5 hai list ka size aur 100 mai ki 5 barr 100 aaega
    list<int>n(5,100);
    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;




    l.push_back(1);
    l.push_front(2);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    /*****************erasing the beginig element from list********/
    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    
/******pop_back*****************/
    l.pop_back();
    for(int i:l){
        cout<<i<<endl;
    }
    /***********pop front*************/
    l.pop_front();
    for(int i:l){
        cout<<i<<endl;
    }

cout<<"size of "<<l.size()<<endl;

}