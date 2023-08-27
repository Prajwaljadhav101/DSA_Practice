#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int x, digit=0,result=0;
    int reverse(int x) {
        while(x!=0){
            digit=x%10;
            // to check if int is greater the int max and returning zero if true
            if ((result > (INT_MAX - abs(digit)) / 10) || result < (INT_MIN + abs(digit)) /10) {
                return 0;
            }
            result=result*10 + digit;
            x/=10;
        }
        
        return result;
    }
};

int main(){
    int x;
    cin>>x;
    Solution sol;
    int reverse=sol.reverse(x);
    cout<<reverse;
}