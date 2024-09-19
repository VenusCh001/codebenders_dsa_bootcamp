#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements you want in your array ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"printing element by my choice ";
    cout<<arr[2];
    return 0;
}
