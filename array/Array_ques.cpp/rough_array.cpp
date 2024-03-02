#include <iostream>
#include <cstdio>
using namespace std;

// int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    // int n=3;
    // // cin>>n;
    // int a[n]={1,2,7};
    // // for(int i=0;i<n;i++){
    // //     cin>>a[i];
    // // }
    // int sum=0;
    //  for(int i=0;i<n;i++){
    //     sum+=a[i];
    //     cout<<sum;
    // }
    // }
int sum(int arr[], int n)
{
    int sum = 0; 
       for (int i = 0; i < n; i++)
        sum += arr[i];
 
    return sum;
}
 
int main()
{
    int arr[] = { 1,2,7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum of given array is " << sum(arr, n);
    return 0;
}
