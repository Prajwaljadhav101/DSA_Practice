#include <iostream>
using namespace std;

int n;
void pattern6(int n)
{
    cout<<"enter n "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*n;j++)
        {
            if(j<=i)
                cout<<"*";
            else if(j>2*n-i)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=2*n;j++)
        {
            if(j<=i)
                cout<<"*";
            else if(j>2*n-i)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;


    }

}

int main()
{
    pattern6(n);
    return 0;
}
	