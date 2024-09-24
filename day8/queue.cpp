#include<iostream>
#include<queue>
using namespace std;
int main(){
    //declaration the stack
    queue<int>q;

    //initialisation
    q.push(20);
    q.push(30);
    q.push(90);
    q.push(50);

    //printing
    while(!q.empty()){
        cout<<q.front()<<" "<<q.back()<<" "<<endl;;
        q.pop();
    }

    return 0;
}