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
        double a,d,n;
        cin>>a>>d>>n;
        double sum;
        sum=a+(n-1)*d;
        cout<<sum<<endl;
        t--;
    }
}