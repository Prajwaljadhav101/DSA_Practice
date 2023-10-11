#include <iostream>
#include <vector>
using namespace std;

void spiralPrint(vector<vector<int>>& matrix){  // code not working when v={{1},{2}}
    int row=matrix.size();
    int col=matrix[0].size();
    int totalElements=row*col;
    int top=0, bottom=row, left=0, right=col;

    while(totalElements!=0){
        for(int i=left; i<right; i++){
            cout<<matrix[top][i]<<" ";
            totalElements--;
        }
        top++;
        for(int i=top; i<bottom; i++){   
            cout<<matrix[i][right-1]<<" ";
            totalElements--;
        }
        right--;
        for(int i=right-1; i>left; i--){
            cout<<matrix[bottom-1][i]<<" ";
            totalElements--;
        }
        bottom--;
        for(int i=bottom; i>=top; i--){
            cout<<matrix[i][left]<<" ";
            totalElements--;
        }
        left++;
    }
    
}

vector<int> spiralOrder(vector<vector<int>>& matrix){   // babbar logic
    vector<int> ans;

    int row = matrix.size();
    int col = matrix[0].size();
    int count = row * col;

    // index initialisation
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row-1;
    int endingCol = col-1;

    while(count!=0){
        // print starting row
        for(int i=startingCol;count!=0 && i<=endingCol; i++){
            ans.push_back(matrix[startingRow][i]);
            count--;
        }
        startingRow++;

        // print ending column
        for(int i=startingRow;count!=0 && i<=endingRow; i++){
            ans.push_back(matrix[i][endingCol]);
            count--;
        }
        endingCol--;

        // print ending row
        for(int i=endingCol;count!=0 && i>=startingCol; i--){
            ans.push_back(matrix[endingRow][i]);
            count--;
        }
        endingRow--;

        // print ending column
        for(int i=endingRow;count!=0 && i>=startingRow; i--){
            ans.push_back(matrix[i][startingCol]);
            count--;
        }
        startingCol++;
    }
    return ans;
}
int main(){
    vector<vector<int>> matrix={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    spiralPrint(matrix);
    cout<<endl;
    vector<int> k=spiralOrder(matrix);
    for(int i=0; i<k.size(); i++){
        cout<<k[i]<<" ";
    }
}