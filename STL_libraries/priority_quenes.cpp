#include <iostream>
#include <Queue>
using namespace std;
int main()
{
    // max heap
    priority_queue<int> maxi;
    // min heap
    priority_queue<int, vector<int>, greater<int>> mini;
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    int n;
    n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }

cout<<endl;
    // finding the minimum element

    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);
    mini.push(0);
    int m;
    m=mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
cout<<endl;
cout<<"empty or not if yes then 1, if no then 0 -> "<<maxi.empty()<<endl;
cout<<"empty or not if yes then 1, if no then 0 -> "<<mini.empty();

}