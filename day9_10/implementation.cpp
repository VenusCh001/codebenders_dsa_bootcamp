#include<iostream>
using namespace std;

//creating class for the node
class node{
    public:
    int data;
    node*next;
    node(int val){
        data=val;
        next=NULL;
    }
};
int main(){
    node*head=new node(40);
    cout<<head->next<<endl;
    
    node*n=new node(70);
    cout<<head->next<<endl;
    cout<<n->next<<endl;
    head->next=n;
    cout<<head->next<<endl;
    return 0;
}