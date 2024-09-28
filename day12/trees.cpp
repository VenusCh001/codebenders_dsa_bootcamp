#include<iostream>
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
int main(){
    node*root=new node(1);// level 1

    root->left=new node(2);// level 2
    root->right=new node(3);

    root->left->left=new node(4);// level 3
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);

    preorderTraversal(root);

    return 0;
}