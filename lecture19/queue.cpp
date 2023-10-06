#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("prajwal");
    q.push("deepak");
    q.push("jadhav");

    cout<<"first element "<<q.front()<<endl;
    q.pop();
    cout<<"first element after pop "<<q.front()<<endl;
}