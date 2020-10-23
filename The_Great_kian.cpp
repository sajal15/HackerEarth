#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    long int n;
    cin>>n;
    long long sum1=0;
    long long sum2=0;
    long long sum3=0;
    long long int arr[n];
    for(long long int i=0; i<n; i++)
    {
        int a;
        cin>>a;
         arr[i]=a;
    }
    for(int i=0; i<n;i=i+3)
    {
        sum1=sum1+arr[i];
    }
    for(int i=1; i<n;i=i+3)
    {
        sum2=sum2+arr[i];
    }
    for(int i=2; i<n;i=i+3)
    {
        sum3=sum3+arr[i];
    }
    cout<<sum1<<" "<<sum2<<" "<<sum3;
}