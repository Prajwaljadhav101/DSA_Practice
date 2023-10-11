#include <iostream>
using namespace std;

void wavePrint(int arr[][3], int row, int col){
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            if(i%2==0){
                cout<<arr[j][i]<<" ";
            }
            else{
                cout<<arr[row-1-j][i]<<" ";
            }
        }
    }
}

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int row=3, col=3;
    wavePrint(arr,row,col);

}