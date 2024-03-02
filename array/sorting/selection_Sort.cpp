 #include<iostream>
 using namespace std;
 int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
             temp=arr[j];
             arr[j]=arr[i];
             arr[i]=temp;
                
            }
        }
    }
    for(int i=0;i<n;i++){

        cout<<arr[i]<<" "; 

    }
    cout<<endl;
 }

//  6
// 12 45 23 51 19 8
// output=
// 8 12 19 23 45 51