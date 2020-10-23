#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int x,y;
        int steps=0;
        cin>>x>>y;
        if(y>x)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            steps=steps+y+(x-y);
            cout<<steps<<endl;
        }
        t--;
    }
}