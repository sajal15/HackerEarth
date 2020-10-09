#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int n;
    int x;
    cin>>n>>x;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        if(a>=x)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }   
}