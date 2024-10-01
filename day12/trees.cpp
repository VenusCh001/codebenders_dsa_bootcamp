#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void preorderTraversal(node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void levelorder(node*root){
    //forming the queue
    queue<node*>q;
    q.push(root);//1

    while(!q.empty()){
        int nodesAtLevel=q.size();//4
        while(nodesAtLevel--){
            //get the front of the queue
            node*currnode=q.front();

            //remove from the queue
            q.pop();

            //print the data of the current node
            cout<<currnode->data<<" ";

            //insert left child if it exists
            if(currnode->left!=NULL)q.push(currnode->left);

            //insert right child if it exists
            if(currnode->right!=NULL)q.push(currnode->right);
        }
        cout<<endl;
        
    }
    cout<<endl;
}
int main(){
    node*root=new node(1);// level 1

    root->left=new node(2);// level 2
    root->right=new node(3);

    root->left->left=new node(4);// level 3
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);

    //preorderTraversal(root);

    cout<<endl;
    levelorder(root);

    return 0;
}