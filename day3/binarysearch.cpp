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

    int low=0;
    int high=n-1;
    int index;
    
    int flag=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            index=mid;
            flag=1;
            break;
        }
        else if(arr[mid]>target){//first half
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(flag==1){//got the target
        cout<<"element found "<<index;
    }
    else{//not got the target
        cout<<"not found";
    }
    return 0;
}
