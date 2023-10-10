#include <iostream>
#include <string>
using namespace std;

void replaceSpace(string& s){
    for(int i=0; i<s.length(); i++){
        if(s[i]==' '){
            s.replace(i,1,"@40");
        }
    }
}

int main(){
    string s;
    cout<<"enter string ";
    getline(cin,s);
    replaceSpace(s);
    cout<<s;
}