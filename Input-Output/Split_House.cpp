#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int flag=1;
    char arr[n];
    for(int i=0; i<n; i++)
    {
        char c;
        cin>>c;
        arr[i]=c;
    }
    for(int i=0; i<n; i++)
    {
        char c1=arr[i];
        char c2=arr[i+1];
        if(c1==c2&&c2=='H')
        {
            flag=flag+1;
        }
    }
    if(flag>=2)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i=0; i<n; i++)
        {
            char c;
            c=arr[i];
            if(c=='.')
            {
                arr[i]='B';
            }
        }
        for(int i=0; i<n; i++)
        {
            cout<<arr[i];
        }
    }

}