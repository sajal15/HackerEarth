#include <iostream>
#include <cstdlib>
using namespace std;
 int main()
 {
    int t;
    cin>>t;
    int a=0;
    int b=7;
    for(int i=0; i<t; i++)
    {
        int f;
        cin>>f;
        int diffA=abs(f-a);
        int diffB=abs(f-b);
        if(diffA==diffB)
        {
            a=f;
            cout<<"A"<<endl;
        }
        else if(diffA>diffB)
        {
            b=f;
            cout<<"B"<<endl;
        }
        else
        {
            a=f;
            cout<<"A"<<endl;
        }
    }
 }