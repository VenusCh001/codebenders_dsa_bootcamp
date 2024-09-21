#include<iostream>
using namespace std;

void input(int matrix[3][3]){
    for(int i=0;i<3;i++){
        cout<<"give input for row "<<i+1<<endl;
        for(int j=0;j<3;j++){
            cin>>matrix[i][j];
        }
    }
}
void add(int matrixone[3][3],int matrixtwo[3][3],int result[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            result[i][j]=matrixone[i][j]+matrixtwo[i][j];
        }
    }
}
void printing(int result[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int matrixone[3][3];
    int matrixtwo[3][3];

    //taking input from the user for the matrix
    cout<<"give input for matrix one"<<endl;
    input(matrixone);
    cout<<"give input for matrix two"<<endl;
    input(matrixtwo);

    //initialising our resultant matrix
    int result[3][3];

    //adding operation on matrix
    add(matrixone,matrixtwo,result);

    //print the resultant matrix
    printing(result);
    
    return 0;
}