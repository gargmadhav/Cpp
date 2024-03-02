#include <iostream>
using namespace std;
int wave_printing(int arr[4][4], int n, int m)
{
    
    // for (int j = 0; j < m; j++)
    // {
    //     if (j % 2 == 0 && j == m)
    //     {
    //         for (int i = 0; i < n; i++)
    //         {
    //             cout << arr[i][j] << " ";
    //         }
    //     }
    //     else
    //     {
    //         for (int i = n - 1; i >= 0; i--)
    //         {
    //             cout << arr[i][j] << " ";
    //         }
    //     }
    for(int i=3;i>=0;i--)
    {
        for(int j=3;j>=0;j--)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
        cout << endl;
    }
    

int main()
{
    int row = 4;
    int col = 4;
    int x = 2;
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    wave_printing(arr, row, col);
}