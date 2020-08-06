//Not working
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        string s1,s2;
        cin>>s1>>s2;
        int flag=0;
        int size=s1.length();
        char arr1[size];
        char arr2[size];
        for(int j=0; j<size; j++)
        {
            char c1=s1.at(j);
            char c2=s2.at(j);
            arr1[j]=c1;
            arr2[j]=c2;
        }
        sort(arr1,arr1+size);
        sort(arr2,arr2+size);
        for(int k=0; k<size; k++)
        {
            if(arr1[k]!=arr2[k])
            {
                //cout<<"NO"<<endl;
                flag++;
            }
        }
        if(flag==0)
            cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
    }
}