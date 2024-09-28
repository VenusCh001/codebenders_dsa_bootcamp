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

bool detectCycle(node*head){
    node*slow=head;
    node*fast=head;
    while(fast!=NULL and fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast)return 1;
    }
    return 0;
}
int main(){
    node*head=new node(40);//40
    head->next=new node(20);//40 20
    head->next->next=new node(90);//40 20 90
    head->next->next->next=new node(100);//40 20 90 100

    // creating cycle deliberately
    head->next->next->next->next=head;

    cout<<detectCycle(head);

    return 0;
}