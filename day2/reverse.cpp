#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int first=0;
    int end=4;
    cout<<"original array is : "<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    while(first<=end){//reverse
        int temp=arr[first];
        arr[first]=arr[end];
        arr[end]=temp;
        first++;
        end--;
    }

    cout<<endl;
    cout<<"reversed array : "<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
