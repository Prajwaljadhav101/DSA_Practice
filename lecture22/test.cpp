#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1="ab";
    string s2="abcdefg";
    s2.erase(0,2);  // it will delete 2 elements from 0 index that is 0 and 1 in case of s2 "ab" will be deleted.
    cout<< s2;
    // if(s2.find(s1)){
    //     cout<<"true";
    // }
}