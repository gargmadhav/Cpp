// to check if pair with given sum exits in the array
#include <iostream>
using namespace std;
int checksum(int arr[], int n, int key)
{
    
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == key)
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{

    int a[] = {0, -1, 2, -3, 1};
    int key = -2;
    int n = 5;

    if (checksum(a,n, key))
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}