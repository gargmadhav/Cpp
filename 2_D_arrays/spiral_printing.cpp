#include <iostream>
using namespace std;
int spiral_printing(int arr[4][4], int rows, int col)
{
    int sr = 0, sc = 0, ec = col - 1, er = rows - 1;

    while (sr <= er && sc <= ec)
    {
        // for first row
        for (int i = sr; i <= ec; i++)
        {
            cout << arr[sr][i] << " ";
        }
        sr++;

        // for right column
        for (int j = sr; j <= er; j++)
        {
            cout << arr[j][ec] << " ";
        }
        ec--;

        // for last row
        if (sr <= er)
        {
            for (int k = ec; k >= sc; k--)
            {
                cout << arr[er][k] << " ";
            }
            er--;
        }

        // for left column
        for (int l = er; l >= sr; l--)
        {
            cout << arr[l][sc] << " ";
        }
        sc++;
    }
}
int main()
{
    int rows = 4, col = 4;
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    spiral_printing(arr, rows, col);
}