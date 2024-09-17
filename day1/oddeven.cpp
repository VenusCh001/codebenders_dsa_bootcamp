#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"tell the number : ";
    cin>>num;
    if(num%2==0){//divisible by 2
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
    return 0;
}