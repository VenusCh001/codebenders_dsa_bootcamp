#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements you want in your array ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"original is : "<<endl;
    for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
    }
    sort(arr,arr+n);
    cout<<endl;
    cout<<"sorted elements are : "<<endl;
    for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
    }

    return 0;

}