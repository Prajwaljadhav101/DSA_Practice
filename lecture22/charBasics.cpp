#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    // char name[10];
    // cout<<"enter your name : ";
    // cin>>name;
    // // name[2]='\0';           //null char at 2nd index therefore name till second index will be printed
    // cout<<"your name is ";
    // cout<<name<<endl;

    // int count=0;
    // for(int i=0; name[i]!='\0'; i++){
    //     count++;
    // }

    // cout<<"length of string is "<<count<<endl;

    // string s;
    // cout<<"enter string ";
    // getline(cin,s,';'); //here ; is delimiter so text till ; will be valid and stored in s and stop reading text after ;
    // cout<<s<<endl;

    // char name[]="prajwal";
    // int len = strlen(name);
    // cout<<"length of name is "<<len;

// for char array

    // char s1[]="prajwal";
    // char s2[]="prajwal";
    // char s3[]="prawjla";
    // if(strcmp(s1,s2)==0){
    //     cout<<"strings are equal"<<endl;
    // }
    // else cout<<"strings are not equal";
    // char s4[]="hello";
    // strcpy(s4,s1);
    // cout<<s4;
    // cout<<endl<<s1;

// for string

    string s1="prajwal jadhav";
    string s2="prajwaljadhav";
    int len=s1.length();
    cout<<len<<endl;
    if(s1.compare(s2)==0){
        cout<<"strings are same ";
    }
    else cout<<"strings are different";

}