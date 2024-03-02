// stack ka mtlb hota hai ki last in first out...............
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("madhav");
    s.push("Garg");
    s.push("Tanvi");
    cout<<"the top element is => "<<s.top()<<endl;
    s.pop();
    cout<<"the top element is -> "<<s.top()<<endl;
 cout<<"the size of stack"<<s.size()<<endl;

}