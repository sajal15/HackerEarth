#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    int last_digit;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        int ld=a%10;
        //sum=sum+ld;
        if(i==(n-1))
        {
            last_digit=ld;
        }
    }
    //if(sum>0)
    //{
        if(last_digit==0||last_digit==5)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No";
        }
        
    //}
    //else
    //{
    //    cout<<"No"<<endl;
    //}
       
}