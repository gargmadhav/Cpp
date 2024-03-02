// k rotate of the 1 d array



#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void revpart(int s, int end, vector<int>&v)
{
    while (s <= end)
    {
        swap(v[s], v[end]);
        s++;
        end--;
    }
}

int main()
{
    vector<int>v = {1, 3, 5, 7, 9};
    int n = v.size();
    int k;
    cin >> k;
    k = k % n;
    revpart(n - 2, n - 1, v);
    revpart(0, n - k - 1, v);
    revpart(0, n - 1, v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i]<<" ";
    }
}

//input = 2
// output= 7 9 1 3 5