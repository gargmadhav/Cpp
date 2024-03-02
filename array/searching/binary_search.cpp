#include <iostream>
using namespace std;
int binary_search(int arr[], int n, int key)
{
    int s = 0;
    int e = n;
    int mid;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;
    cout<<binary_search(a,n,key);

}

// 10
// 1 2 3 4 5 6 7 8 9 10
// 6
// output=5