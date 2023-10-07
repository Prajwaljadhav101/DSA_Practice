#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int sumOfArrays(vector<int>& v1, vector<int>& v2){
    int num1=0, num2=0;
    int n1=v1.size();
    int n2=v2.size();
    for(int i=0; i<n1; i++){
        num1=num1 + v1[n1-i-1]*pow(10,i);
    }
    for(int i=0; i<n2; i++){
        num2=num2 + v2[n2-i-1]*pow(10,i);
    }
    int sum = num1 + num2;
    return sum;
    
}

int main(){
    vector<int> v1={1,2,3};
    vector<int> v2={9,9};
    cout<<sumOfArrays(v1,v2);
}