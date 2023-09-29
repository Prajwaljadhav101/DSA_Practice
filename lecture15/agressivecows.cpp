#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n2Soln(vector<int> &stalls, int k){
    int maxi=0, temp=0;
    for(int i=0; i < stalls.size(); i++){
        for(int j=i+1; j < stalls.size(); j++){
            temp = abs(stalls[i]-stalls[j]);
            if(temp>maxi){
                maxi=temp;
            }
        }
    }
    return maxi;
}

bool isPossible(vector<int>& stalls, int k, int mid){
    int cowCount = 1;
    int lastPos=stalls[0];
    for(int i=0; i<stalls.size(); i++){
        if(stalls[i]-lastPos>=mid){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int binarySoln(vector<int>& stalls, int k){
    sort(stalls.begin(), stalls.end());
    int s=0;
    int maxi=0;
    for(int i=0; i<stalls.size(); i++){
        maxi = max(maxi, stalls[i]);
    }
    int e=maxi;
    int ans=0;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(isPossible(stalls, k, mid)){
            ans = mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid = s + (e-s)/2;
    }

    return ans;

}

int main(){
    vector<int> stalls={4,2,1,3,6};
    int k=2;
    // cout<<n2Soln(stalls,k);
    cout<<binarySoln(stalls, k);
}