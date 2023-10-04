#include <iostream>
using namespace std;

class b{public:
    b(){
        cout<<1;
    }
    ~b(){
        cout<<2;
    }
};
class b1{public:
    b1(){
        cout<<3;
    }
    ~b1(){
        cout<<4;
    }
};

class d:public b1, public b{public:
    d(){
        cout<<5;
    }
    ~d(){
        cout<<6;
    }
};

int main(){
    d c;
}