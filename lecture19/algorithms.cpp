#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> v;

    v.push_back(10);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(6);
    v.push_back(6);

    cout<<"finding 6 "<<binary_search(v.begin(),v.end(), 6)<<endl;

    cout<<"lower bound "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper bound "<<upper_bound(v.begin(),v.end(),10)-v.begin()<<endl;

    string s="abcde";
    cout<<"string is -> "<<s<<endl;
    cout<<"reversed string is -> ";
    reverse(s.begin(),s.end());
    cout<<s<<endl;

    cout<<"before rotate ";
    for(int i:v){
        cout<<i<<" ";
    }
    rotate(v.begin(),v.begin()+2, v.end());
    cout<<endl<<"after rotate ";
    for(int i:v){
        cout<<i<<" ";
    }

    int a = 3;
    int b = 5;

    cout<<endl<<"min is "<<min(a,b)<<endl;
    cout<<"max is "<<max(a,b)<<endl;
    cout<<"value of a and b before swapping is "<<a<<" and "<<b<<endl;
    swap(a,b);
    cout<<"value of a and b after swapping is "<<a<<" and "<<b<<endl;
    
    cout<<"vector v before sorting is ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    cout<<"vector v after sorting is ";
    for(int i:v){
        cout<<i<<" ";
    }

}