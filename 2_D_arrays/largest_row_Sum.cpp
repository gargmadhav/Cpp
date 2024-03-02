// print the largest row sum of the 2D array
// doubt*-----------------------------------------------------2

#include <iostream>
using namespace std;
int main()
{
    int mx = -1999999;
    int arr[3][3] = {3, 4, 11, 2, 12, 1, 7, 8, 7};
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            // cout<<arr[i][j];
            sum += arr[i][j];
        }

        if (sum > mx)
        {
            mx = sum;
        }
    }
    cout << mx;
}
