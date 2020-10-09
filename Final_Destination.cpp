#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int l=s.length();
    int x=0;
    int y=0;
    for(int i=0; i<l; i++)
    {
        if(s.at(i)=='L')
        {
            x--;
        }
        else if(s.at(i)=='R')
        {
            x++;
        }
        else if(s.at(i)=='D')
        {
            y--;
        }
        else if(s.at(i)=='U')
        {
            y++;
        }
    }
    cout<<x<<" "<<y;
}