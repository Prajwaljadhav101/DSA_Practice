#include<iostream>
using namespace std;

int main(){
    int num = 1;
    cout<<endl;
    switch(num){
        case 1:cout<<"first"<<endl;
            break;

        case 2: cout<<"second"<<endl;
            break;

        default: cout<<"default"<<endl;
    }
    cout<<endl;

    return 0;

    // while(1){
    //     switch(num){
    //         case 1: cout<<"1"<<endl;
    //         exit(0);
    //     }
    // }
}