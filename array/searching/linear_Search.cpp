// returning the index where the key is placed
#include <iostream>
using namespace std;
int linear_search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    // int key;
    // cin >> key;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin>>key;

    cout << linear_search(arr, n, key);
}
// 5
// 1 2 5 4 1 
// 5
// output=2