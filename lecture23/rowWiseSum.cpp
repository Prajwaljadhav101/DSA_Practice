#include <iostream>
using namespace std;

void rowWiseSum(int arr[][3],int row, int col){
    int sum=0;
    int largestRow=1;
    int largestSum=INT_MIN;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            sum = sum + arr[i][j];
        }
        cout<<"sum of row "<<i+1<<" is "<<sum<<endl;
        if(sum>largestSum){
            largestSum=sum;
            largestRow=i+1;
        }
        sum=0;
    }
    cout<<"largest row is "<<largestRow<<" with sum "<<largestSum<<endl;
}

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int row=3, col=3;
    rowWiseSum(arr,row,col);
}