// leetcode 69

#include <iostream>
using namespace std;

int mySqrt(int x) {
    int s=0, e=x, ans=0;
    while(s<=e){
        int mid = s + (e-s)/2;
        if((mid * mid) > x){
            e = mid -1;
        }
        else if((mid * mid) <= x){
            ans = mid;
            s = mid+1;
        }
    }
    return ans;
    
}

double morePrecision(int n, int precision, int tempSol){
    double factor = 0.1;
    double ans= tempSol;
    for(int i=0; i<precision; i++){
        
        while(true){
            if(ans * ans > n){
                ans = ans - factor;
                break;
            }
            ans = ans + factor;
            // cout<<ans<<endl;
        }
        factor = factor/10;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>> n;

    int tempSol = mySqrt(n);
    cout<<"precise answer is "<<morePrecision(n, 3, tempSol);
}