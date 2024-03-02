#include <iostream>
using namespace std;

int swapalternate(int arr[], int n)
{
    int temp=0;
    for (int i = 0; i < n; i += 2)

    {
        if (i+1 < n)
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            // swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int arr[] = {1,2,7,8,5};
    int n = 5;
    // swapalternate(arr, n);
    cout << swapalternate(arr, n);
    return 0;
}