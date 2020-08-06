#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++)
    {
        int element;
        cin>>element;
        arr[i]=element;
    }
    int flag=0;
    int ar[n];
    for(int i=0; i<n; i++)
    {
        int a=arr[i];
        int sum=0;
        int j=0;
        while(j<n)
        {
            if(j!=i)
            {
                sum=sum+arr[j];
                j=j+1;
            }
            if(sum%7==0)
            {
                ar[flag]=a;
                flag++;
            }
        }
    }
    sort(ar,ar+n);
    int b=ar[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]==b)
        {
            cout<<i;
        }
    }
}
    
    