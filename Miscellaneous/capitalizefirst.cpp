#include <iostream>
#include <string>
using namespace std;

void capitalizeFirst(string& s){
    for(int i=0; i<s.length(); i++){
        if(i==0 || isspace(s[i-1])){
            s[i]=toupper(s[i]);
        }
    }
    for(int i=0; i<s.length(); i++){
        cout<<s[i];
    }
}

int main(){
    string s;
    cout<<"enter string : ";
    getline(cin,s);
    capitalizeFirst(s);
    return 0;
}