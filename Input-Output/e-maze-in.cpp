#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int x=0;
    int y=0;
    cin>>s;
    int l;
    l=s.length();
    char c;
    for(int i=0; i<l; i++)
    {
        c=s.at(i);
        if(c=='L')
        x--;
        else if(c=='R')
        x++;
        else if(c=='D')
        y--;
        else if(c=='U')
        y++;
    }
    cout<<x<<" "<<y;
}