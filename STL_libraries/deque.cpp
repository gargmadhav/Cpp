#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
      d.push_front(2);
      d.push_back(1);
//       for(int i:d){
//         cout<<i<<" ";
//       }
//       cout<<endl;
//       d.pop_front();
// for(int i:d){
//         cout<<i<<endl;
    //   }

cout<<"element at first index "<<d.front()<<endl;
cout<<"element at second index "<<d.back()<<endl;

cout<<"elememt at 1st index "<<d.at(1)<<endl;
cout<<"empty or not "<<d.empty()<<endl;

cout<<" before erace "<<d.size()<<endl;
d.erase(d.begin(),d.begin()+1);
cout<<"after erase "<<d.size()<<endl;
// we are using to check which element is present in the deque.........
for(int i:d){
    cout<<i<<endl;

}
}
