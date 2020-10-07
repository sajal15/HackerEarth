#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int l=s.length();
    int sum=0;
    for(int i=0; i<l; i++)
    {
        char c=s.at(i);
        sum=sum+(int)c-96;
    }
    cout<<sum;
}