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

void insertAtBegin(node*&head,int val){
    node*newnode=new node(val);//a new node is created
    newnode->next=head;
    head=newnode;
}
void insertAtend(node*&head,int val){
    node*newnode=new node(val);
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    //connection from the last node to the newly made node
    temp->next=newnode;
}
void insertAtindex(node*&head,int target,int val){
    if(target==1){
        insertAtBegin(head,val);
    }
    node* newnode=new node(val);
    node*temp=head;
    int count=1;
    while(count<target-1){
        count++;
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    
}
void deleteAthead(node*&head){
    node*ptr=head;
    head=head->next;
    delete ptr;
}
void deleteAtEnd(node*&head){
    node*temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    node*ptr=temp->next;
    temp->next=NULL;
    delete ptr;
}
void findmiddlenode(node*&head){
    node*slow=head;
    node*fast=head;
    while(fast!=NULL and fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data<<endl;
}

void reversell(node*&head){
    node*prev=NULL;
    node*curr=head;
    node*nextptr=NULL;
    while(curr!=NULL){
        //update the nextptr
        nextptr=curr->next;

        //reconnect
        curr->next=prev;

        //update
        prev=curr;
        curr=nextptr;
    }
    head=prev;
}
void printing(node*head){
    cout<<endl;
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
}
int main(){
    cout<<"the original linked list is : "<<endl;
    node*head=new node(40);//40
    insertAtBegin(head,50);//50-->40 
    insertAtBegin(head,60);//60-->50--->40
    insertAtBegin(head,90);
    insertAtBegin(head,45);
    insertAtend(head,100);
    insertAtindex(head,3,70);
    printing(head);
    cout<<endl;
    
    reversell(head);
    printing(head);

    return 0;
}