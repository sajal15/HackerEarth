
#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;


int main()
{
    int arr[10]={6,2,5,5,4,5,6,3,7,6};
    int t;
    cin>>t;
    int sum=0;
    while(t>0)
    {
        int n;
        cin>>n;
        if(n!=0)
        {
        while(n>0)
            {
                int d=n%10;
                sum=sum+arr[d];
                n=n/10;
            }
        for(int i=1; i<=sum/2; i++)
            {
                cout<<"1";
            }
        }
        else
        {
            sum=6;
             for(int i=1; i<=sum/2; i++)
            {
                cout<<"1";
            }
        }
        
        t--;
        cout<<endl;
    }
    
}