#include<iostream>
using namespace std;
class student{
    public:
    int id;
    string name;
    student(int id,string name){
        this->id=id;
        this->name=name;
    }
    void print(){
        cout<<"you have called "<<id;
    }
};
int main(){
    student student1(22,"venus");//statically
    student*st2=new student(23,"jaismeen");//dynamically

    cout<<student1.id<<endl;
    cout<<student1.name<<endl;

    cout<<st2->id<<endl;
    cout<<st2->name<<endl;

    student1.print();
    st2->print();
    return 0;
}