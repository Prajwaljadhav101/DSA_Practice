#include <iostream>
using namespace std;

char toLower(char ch){
    if(ch >='a' && ch <='z' || ch >= '0' && ch <= '9')
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool isPalindrome(char str[], int length){
    for(int i=0; i<length; i++){
        return (str[i]==str[--length]);
    }
}

// bool ChatGPT(string s) {
//     int left = 0;
//     int right = s.length() - 1;

//     while (left < right) {
//         char leftChar = tolower(s[left]);
//         char rightChar = tolower(s[right]);

//         if (!isalnum(leftChar)) {
//             left++;
//         } else if (!isalnum(rightChar)) {
//             right--;
//         } else if (leftChar != rightChar) {
//             return false;
//         } else {
//             left++;
//             right--;
//         }
//     }

//     return true;
// }


int main(){
    char str[20];
    cout<<"enter string ";
    cin>>str;

    int length;
    for(int i=0; str[i]!='\0'; i++){
        length++;
    }

    for(int i=0; i<length; i++){
        str[i]=toLower(str[i]);
    }

    cout<<"lower string is "<<str<<endl;

    if((isPalindrome(str,length))==1){
        cout<<"string is palindrome";
    }
    else cout<<"string is not palindrome";
    return 0;
}