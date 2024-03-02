// chopstick questionusin vector

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int chopstick(vector<int>v, int d)
{
    sort(v.begin(), v.end());
    int count = 0;
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i + 1] - v[i] <= d)
        {
            count++;
            i+=2;
        }
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    int d=2;
    vector<int>v(n);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    chopstick(v,d);
}