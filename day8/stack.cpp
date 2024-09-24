#include<iostream>
#include<stack>
using namespace std;
int main(){
    //declaration the stack
    stack<int>st;

    //initialisation
    st.push(20);
    st.push(30);
    st.push(90);
    st.pop();
    st.push(50);
    
    //printing
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}