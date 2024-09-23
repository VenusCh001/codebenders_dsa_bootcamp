#include<iostream>
using namespace std;
void gen(string str,string currstr,int index){
    //base case
    if(index==str.size()){
        cout<<currstr<<endl;
        return;
    }
    //taking the element
    gen(str,currstr+str[index],index+1);
    //not taking the element
    gen(str,currstr,index+1);
}

int main(){
    string str;
    cin>>str;
    gen(str,"",0);
    return 0;
}

