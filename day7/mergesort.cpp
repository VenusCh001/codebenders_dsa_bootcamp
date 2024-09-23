#include<iostream>
using namespace std;
void merge(int arr[],int low,int mid,int high){
    //lets calculate the size of the array
    int a=mid-low+1;
    int b=high-mid;

    //storing the elements
    int arr1[a];
    int arr2[b];

    //filling the first half of the array 
    for(int i=0;i<a;i++){
        arr1[i]=arr[low+i];
    }

    //filling the second half of the array
    for(int j=0;j<b;j++){
        arr2[j]=arr[mid+1+j];
    }

    int firstpointer=0;
    int secondpointer=0;
    int k=low;//using it to traverse the resultant array

    //merging process
    while(firstpointer<a and secondpointer<b){
        if(arr1[firstpointer]<arr2[secondpointer]){
            arr[k]=arr1[firstpointer];
            firstpointer++;
        }
        else{
            arr[k]=arr2[secondpointer];
            secondpointer++;
        }
        k++;
    }
    //left over ones
    while(firstpointer<a){
        arr[k]=arr1[firstpointer];
        k++;firstpointer++;
    }
    while(secondpointer<b){
        arr[k]=arr2[secondpointer];
        k++;secondpointer++;
    }


}
void divide(int arr[],int low,int high){
    if(low>=high)return;
    int mid=(low+high)/2;
    divide(arr,low,mid);//first half
    divide(arr,mid+1,high);//second half
    merge(arr,low,mid,high);
}
int main(){
    //input of array
    int arr[]={5,3,1,7};
    int n=sizeof(arr)/sizeof(arr[0])-1;
    divide(arr,0,n);
    //printing the array
    for(int i=0;i<n+1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}