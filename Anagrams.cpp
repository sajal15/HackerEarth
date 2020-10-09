//not working
#include <iostream>
#include <String>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        string a;
        string b;
        cin>>a>>b;
        cout<<a<<endl <<b<<endl;
    }*/
   char arr[9];
   for(int i=0; i<9; i++)
   {
       char c;
       cin>>c;
       arr[i]=c;
   }
   sort(arr,arr+9);
   for(int i=0; i<9; i++)
   {
       cout<<arr[i]<<endl;
   }
}