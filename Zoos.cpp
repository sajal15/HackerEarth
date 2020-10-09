#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <string>

int main()
{
   string s;
    cin>>s;
    int size=s.length();
    int o=0;
    int z=0;
    for(int i=0; i<size; i++)
    {
        char c;
        c=s.at(i);
        if(c=='o'||c=='O')
        o++;
        if(c=='z'||c=='Z')
        z++;
    }
    if(o/z==2 && o%z==0)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
}