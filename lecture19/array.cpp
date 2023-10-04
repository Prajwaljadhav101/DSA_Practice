#include<iostream>
#include <array>
using namespace std;

int main(){
    int arr[3]={1,2,3};
    // int size= arr.size(); does not work
    array<int,3> a= {1,2,3};
    int size = a.size();
    return 0;
}