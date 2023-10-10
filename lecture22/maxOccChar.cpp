#include <iostream>
#include <vector>
#include <string>
using namespace std;

char maxOccCharacter(string s){
    vector<int> v(26,0);
    for(int i=0; i<s.size(); i++){
        if(s[i]>='a' && s[i]<='z'){
            v[s[i]-'a']++;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            v[s[i]-'A']++;
        }
    }
    int max=0;
    int index=-1;
    for(int i=0; i<v.size(); i++){
        if(v[i]>max){
            max=v[i];
            index=i;
        }
    }
    char result = 'a'+ index;
    if(index>=0) return result;
    return 0;

}

// above function can be optimazed by lowering upper case alphabets first

int main(){
    string s="the quick brown fox jumps over the lazy dog";
    cout<<maxOccCharacter(s);

}