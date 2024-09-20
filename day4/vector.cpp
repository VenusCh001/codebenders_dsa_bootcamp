#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr;
    for(int i=0;i<3;i++){
        arr.push_back(2);
    }
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}