#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int bitwiseComplement(int n) {
        int m=n;
        int mask=0;
        if(n==0){
            return 1;
        }
        while(m!=0){
            mask=(mask<<1) | 1;
            m=m>>1;
        }
        int ans=(~n)&mask;
        return ans;
    }
};

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    Solution sol;
    int answer=sol.bitwiseComplement(n);
    cout<<"complement of given number is :"<<answer;
}