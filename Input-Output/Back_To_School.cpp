#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int max1=max(a,b);
    int max2=max(b,c);
    int ans=max(max1,max2);
    cout<<ans;
}