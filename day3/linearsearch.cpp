#include<iostream>
using namespace std;
int main(){

    //getting the size of the array
    cout<<"how many elements : ";
    int n;cin>>n;

    //getting the required array
    int arr[n];
    cout<<"enter array ke elements ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //getting the target element
    int target;
    cout<<"target element input ";
    cin>>target;

    int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            flag=1;
            break;
        }
    }
    if(flag==1){//got the target
        cout<<"element found ";
    }
    else{//not got the target
        cout<<"not found";
    }

    return 0;
}