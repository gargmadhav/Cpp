// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     cout << "capacity of vector-> " << v.capacity() << endl;
//     // capacity btata hai ki kitne elements hum esme store kr skte hai....
//     v.push_back(1);
//     cout << "capacity of vector-> " << v.capacity() << endl;
//     v.push_back(2);
//     cout << "capacity of vector-> " << v.capacity() << endl;
//     v.push_back(3);
//     cout << "capacity of vector-> " << v.capacity() << endl;
//     // size mtlb hau ki kitne elements hai vector mai...
//     cout << "the size of vector is ->" << v.size() << endl;
// // -------------------------------------------------------------------------------------------------------
//     cout << "element at second index ->" << v.at(2) << endl;

//     cout << "front - >" << v.front() << endl;
//     cout << "last - > " << v.back() << endl;
// // ---------------------------------------------------------------------
// // pop mtlb hai ki vo apka last index remove kr dega
//     cout << "before pop" << endl;
//     for (int i : v)
//     {
//         cout << i << " ";
//     }
//     cout << endl;
//     // after pop
//     v.pop_back();
//     for (int i : v)
//     {

//         cout << i << " ";
//     }
//    // ------------------------------------------------------------------------------
// // clearing the vector and checking the size of vector
//     cout<<"before clear"<<v.size()<<endl;
//     v.clear();
//     cout<<"after clear"<<v.size()<<endl;


// ///////////////////////////////////////////////////////////////////////////////////////////////////////
// vector<int>a(5,1);
// for(int i:a){
//     cout<<i<<endl;
// }
// // esme 5 vector ka size hai aur 1 ka mtlb hai ki sare elements 1 honge

// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     cout<<"Size :"<<v.size()<<endl;
//     cout<<"Capacity :"<<v.capacity()<<endl;
    
    
//     v.push_back(1);
//     cout<<"Size :"<<v.size()<<endl;
//     cout<<"Capacity :"<<v.capacity()<<endl;
    
//     v.push_back(2);
//     cout<<"Size :"<<v.size()<<endl;
//     cout<<"Capacity :"<<v.capacity()<<endl;
    
//     v.push_back(3);
//     cout<<"Size :"<<v.size()<<endl;
//     cout<<"Capacity :"<<v.capacity()<<endl;
    
//     v.resize(5);
//     cout<<"Size :"<<v.size()<<endl;
//     cout<<"Capacity :"<<v.capacity()<<endl;
    
//     v.resize(7);
//     cout<<"Size :"<<v.size()<<endl;
//     cout<<"Capacity :"<<v.capacity()<<endl;
    
//     v.resize(12);
//     cout<<"Size :"<<v.size()<<endl;
//     cout<<"Capacity :"<<v.capacity()<<endl;
    
// }

/************using loops in vectors**********/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
// using for loop   
    for(int i=0;i<5;i++){
    int element;
     cin>>element;
    v.push_back(element);
}

for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;

// for each loop
for(int ele :v){
    cout<<ele<<" ";
}
cout<<endl;

// while loop
int idx=0;
while(idx<v.size()){
    cout<<v[idx++]<<" ";
}
}

