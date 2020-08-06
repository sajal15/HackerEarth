//Incomplete
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        char ar[n];
        int count=0;
        for(int j=0; j<n; j++)
        {
            cin>>ar[j];
        }
        for(int j=0; j<n; j++)
        {
            char c2,c1;
            c1=ar[j];
            c2=ar[j+1];
            if(c2=='a'||c2=='e'||c2=='i'||c2=='o'||c2=='u'||c2=='A'||c2=='E'||c2=='I'||c2=='O'||c2=='U')
            {
                if(c1!='a'&&c1!='e'&&c1!='i'&&c1!='o'&&c1!='u'&&c1!='A'&&c1!='E'&&c1!='I'&&c1!='O'&&c1!='U')
                count++;
            }

        }
        cout<<count<<endl;

    }
}