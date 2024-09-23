#include<iostream>
#include<vector>
using namespace std;
int coinchange(vector<int>coins,int index,int targetamount){
    //combination found
    if(targetamount==0){
        return 1;
    }
    if(targetamount<0 or index==coins.size()){
        return 0;
    }
    return coinchange(coins,index,targetamount-coins[index]) 
    + coinchange(coins,index+1,targetamount);
}
int main(){
    vector<int>coins={2,5,3,6};
    int targetamount=10;
    cout<<coinchange(coins,0,targetamount);
    return 0;
}