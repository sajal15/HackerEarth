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
        string s;
        cin>>s;
        int wall=0;
        int l=s.length();
        for(int i=0; i<l; i++)
        {
            if((i<2)&&(s.at(i)=='W')&&((s.at(i+1)=='B')||(s.at(i+2)=='B')))
            {
                wall++;
                s.replace(i,1,".",1);
            }
            else if(i>=2)
            {
                if(s.at(i)=='B')
                {
                    if(s.at(i-1)=='W')
                    {
                        wall++;
                        s.replace((i-1),1,".",1);
                    }
                    if(s.at(i-2)=='W')
                    {
                        wall++;
                       s.replace((i-2),1,".",1);
                    }
                    if(s.at(i+1)=='W')
                    {
                        wall++;
                        s.replace((i+1),1,".",1);
                    }
                    if(s.at(i+2)=='W')
                    {
                        wall++;
                        s.replace((i+2),1,".",1);
                    }
                }
            }
        }
        cout<<wall<<endl;
        t--;
    }
}