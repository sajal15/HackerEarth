#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <string>

int main()
{
   string s;
    cin>>s;
    int size=s.length();
    char arr1[size];
    char arr2[size];
    for(int i=0; i<size; i++)
    {
        char c;
        c=s.at(i);
        arr1[i]=c;
    }
    
    for(int j=size-1; j>=0; j--)
    {
        char c;
        c=s.at(j);
        arr2[size-j-1]=c;
    }
    /* for(int k=0; k<size; k++)
     {
         cout<<arr1[k];
         cout<<arr2[k];
     }*/
    int count=0;
    for(int k=0; k<size; k++)
    {
        char c1,c2;
        c1=arr1[k];
        c2=arr2[k];
        if (c1==c2)
        count++;
    }
    if (count==size)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

}
