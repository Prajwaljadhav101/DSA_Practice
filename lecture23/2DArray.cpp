#include <iostream>
using namespace std;

int main(){
    int arr[3][3];      //arr[row][column];

    // taking input
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    // display output
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}