// #include <iostream>
// using namespace std;
// int wave_printing(int arr[][4], int row, int col)
// {
//     for (int j = 0; j < col; j++)
//     {
//         if (j % 2 == 0)
//         {
//             for (int i = 0; i < row; i++)
//             {
//                 cout << arr[j][i]<<" ";
//             }
//         }
//         else
//         {
//             for (int i = row - 1; i >= 0; i--)
//             {
//                 cout << arr[i][j]<<" ";
//             }
//         }
//     cout<<endl;
//     }
// }
// int main()
// {
//     int row = 4;
//     int col = 4;
//     int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
//     wave_printing(arr, row, col);
// }

#include<iostream>
using namespace std;
int wave_printing(int arr[][4],int row,int col){
    for(int j=0;j<col;j++){
        if(j%2==0){
            for(int i=row-1;i>=0;i--){
                cout<<arr[i][j]<<" ";

            }
        }
        else{
            for(int i=0;i<row;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int row=4,col=4;
    int arr[4][4]={{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    wave_printing(arr,row,col);
}

// output=
// 13 9 5 1 
// 2 6 10 14
// 15 11 7 3
// 4 8 12 16
