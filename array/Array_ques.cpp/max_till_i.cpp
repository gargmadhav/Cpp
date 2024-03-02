// input=arr[1,0,5,4,6,8]
// output=[1,1,4,5,6,8]

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mx = -199999999;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        cout << mx <<" ";
    }   
}
// input=arr[1,0,5,4,6,8]
// output=[1,1,4,5,6,8]

