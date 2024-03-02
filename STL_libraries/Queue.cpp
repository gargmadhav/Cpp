// Queue mtlb first in first out
#include<iostream>
#include<Queue>
using namespace  std;
int main(){
    queue<string> q;
    q.push("madhav");
    q.push("garg");
    q.push("tanvi");

    cout<<q.front()<<endl;
    q.pop();
        cout<<q.front()<<endl;

}
