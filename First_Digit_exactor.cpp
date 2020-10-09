#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
   long int n;
   cin>>n;
   long long int a;
   long long int even=0;
   long long int odd=0;
   for(long int i=1; i<=n; i++)
   {
       cin>>a;
       if(i<=n/2)
       {
           while(a>=10)
                {
                    a=a/10;
                }  
           if(i%2==0)
           {  
               even=even+a;
           }
           else
           {
               odd=odd+a;
           }
           
       }
       else
       {
           a=a%10;
           if(i%2==0)
           {
               even=even+a;
           }
           else
           odd=odd+a;
       }
   }
   
    if ((odd - even)%11==0)
    {
        cout<<"OUI";
    }
    else
    {
        cout<<"NON";
    }
}