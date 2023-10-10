#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

void reverseWords(string s){
    vector<string> words;
    string word;
    stringstream ss(s);

    while(ss >> word){
        words.push_back(word);
    }

    for(int i=words.size()-1; i>=0; i--){
        cout<<words[i]<<" ";
    }
    
}

int main(){
    string s="the sky is blue";
    reverseWords(s);

}