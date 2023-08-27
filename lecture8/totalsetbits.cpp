#include<iostream>
using namespace std;

int setBits(int num1, int num2){
    int count=0;

    while(num1!=0){
        if(num1&1){
            count++;
            num1=num1>>1;
        }
        else num1=num1>>1;
    }

    while(num2!=0){
        if(num2&1){
            count++;
            num2=num2>>1;
        }
        else num2=num2>>1;
    }

    return count;
    
}

int main(){
    int a,b;
    cout<<"enter two numbers a and b ";
    cin>>a>>b;

    int ans=setBits(a,b);
    cout<<"number of set bits are "<<ans;
    return 0;

}