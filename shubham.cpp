#include<iostream>
using namespace std;



int solve(string s1,string s2){
    int start = stoi(s1);
    int end = stoi(s2);
    int cnt = 0;

    for(int i = start; i<=end; i++){
        int x = 0;
        int mini = INT_MAX;
        int maxi = INT_MIN;

        int p = i;
        while(p!=0){
            int temp = p%10;
            x^=temp;
            mini = min(mini,temp);
            maxi = max(maxi,temp);

            p = p/10;
        }

        if(x > (mini+maxi)/2){
            cnt++;
        }
    }

    return cnt;
}


int main(){
    string a ="32";
    string b ="35";

    int x = solve(a,b);
    cout<<x<<endl;
    
    return 0;
}