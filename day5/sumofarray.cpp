#include<iostream>
#include<vector>
using namespace std;

int add(vector<int>arr,int index,int n){
    if(index==n){
        return 0;
    }
    return arr[index]+add(arr,index+1,n);
}
//index=0 return arr[0]+add(arr,1,n)
//index=1 return arr[1]+add(arr,2,n)
//index=2 return arr[2]+add(arr,3,n)
//index=3 return 0;

int main(){
    vector<int>arr;
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);

    cout<<add(arr,0,arr.size());
    return 0;
}