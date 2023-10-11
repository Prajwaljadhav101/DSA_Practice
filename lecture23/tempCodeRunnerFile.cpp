#include <iostream>
#include <vector>
using namespace std;

void spiralPrint(vector<vector<int>>& v){
    int row=v.size();
    int col=v[0].size();
    int count=row*col;
    int top=0, bottom=v.size(), left=0, right=v[0].size();

    while(count!=0){
        for(int i=left; i<right; i++){
            cout<<v[top][i]<<" ";
            count--;
        }
        top++;
        for(int i=top; i<bottom; i++){   
            cout<<v[i][right-1]<<" ";
            count--;
        }
        right--;
        for(int i=right-1; i>left; i--){
            cout<<v[bottom-1][i]<<" ";
            count--;
        }
        bottom--;
        for(int i=bottom; i>=top; i--){
            cout<<v[i][left]<<" ";
            count--;
        }
        left++;
    }
    
}

int main(){
    vector<vector<int>> v={{1,2,3},{4,5,6},{7,8,9}};
    spiralPrint(v);
}