#include<iostream>
#include<vector>
using namespace std;
int compress(vector<char> &input){
    string out;
    int freq=1;
    for(int i=0;i<=input.size();i++){
        while(input[i]==input[i+1] && i<input.size()){
            i++;
            freq++;
        }
        out=out+input[i];
        if(freq==1){
            continue;
        }
        out=out+to_string(freq);
        freq=1;
    }
    input.clear();
    for(int i=0;i<out.length();i++){
        input.push_back(out[i]);
    }
    return input.size();
}
int main(){
    vector <char>input;
    char temp;
    while(cin.get(temp) && temp !='\n')
{
input.push_back(temp);
}
cout<<compress(input)<<endl;
for(int i=0;i<input.size();i++){
    cout<<input[i];
}
return 0;
}

// input=aaabbc
// output=a3b2c