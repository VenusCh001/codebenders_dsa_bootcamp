#include<iostream>
#include<algorithm>
using namespace std;
void twosumoptimised(int n,int arr[],int targetsum){
    //sort the array first
    sort(arr,arr+n);

    //initialising two pointers
    int left=0;
    int right=n-1;

    //logic
    while(left<right){
        int currsum=arr[left]+arr[right];
        if(currsum>targetsum){
            right--;
        }
        else if(currsum<targetsum){
            left++;
        }
        else{
            cout<<"found"<<endl;
            cout<<"elements are : "<<arr[left]<<" and "<<arr[right];
            return;
        }
    }
    //not found
    cout<<"not found ";
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

    //make function ( twosumoptimised )
    twosumoptimised(n,arr,target);
    return 0;
}