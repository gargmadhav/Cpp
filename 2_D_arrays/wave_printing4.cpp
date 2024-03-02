#include <iostream>
using namespace std;
int wave_printing(int arr[][4], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 0; j < m; j++)
            {
                cout << arr[i][j]<<" ";
            }
        }
        else{
            for(int j=n;j>=1;j--){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int n=4,m=4;
    int arr[4][4]={{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    wave_printing(arr,n,m);
}