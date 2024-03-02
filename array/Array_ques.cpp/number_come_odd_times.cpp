// to find the number which occur odd times in the array
#include <iostream>
using namespace std;
int odd_time_occur(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            return arr[i];
        }
    }
    return 0;
}
int main()
{
    int a[] = {1, 2,3, 2, 3, 1, 3};
    int n = 7;
    cout << odd_time_occur(a, n);
}