#include<iostream>
using namespace std;

void twosumbrute(int n,int arr[],int targetsum){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==targetsum){
                cout<<"found"<<endl;
                cout<<"elements are : "<<arr[i]<<" and "<<arr[j];
                return;
            }
        }
    }

}
int main(){
    cout<<"enter elements";
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the target element"<<endl;
    int target;
    cin>>target;

    //make function ( twosumbrute )
    twosumbrute(n,arr,target);
    return 0;
}