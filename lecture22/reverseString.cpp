#include <iostream>
using namespace std;

void reverseString(char string[], int length){
    for(int i=0; i<length; i++){
        
        swap(string[i],string[--length]);
    }
    
}
int main(){
    char string[10];
    cout<<"enter string ";
    cin>>string;
    int length=0;
    for(int i=0; string[i]!='\0'; i++){
        length++;
    }
    reverseString(string,length);
    cout<<string;
    
}