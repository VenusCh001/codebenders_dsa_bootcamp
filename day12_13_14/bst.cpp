#include<bits/stdc++.h>
using namespace std;
class node
{
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

node* insertionInBST(node*root,int val){
    if(root==NULL){
        node*newnode=new node(val);
        return newnode;
    }
    //condition 1
    if(root->data>val){
        root->left=insertionInBST(root->left,val);
    }//condition 2
    else if(root->data<val){
        root->right=insertionInBST(root->right,val);
    }
    return root;
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
    node*root=new node(5);
    insertionInBST(root,3);
    insertionInBST(root,1);
    insertionInBST(root,4);
    insertionInBST(root,7);
    insertionInBST(root,6);

    levelorder(root);
    return 0;
}