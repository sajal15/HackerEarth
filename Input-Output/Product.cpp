#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int  arr[t];
    for(int i=0; i<t; i++)
    {
        long long int element;
        cin>>element;
        arr[i]=element;
    }
    long long int product=1;
    for(int i=0; i<t; i++)
    {
        long long int element;
        element=arr[i];
        product=(product*element)%(1000000007);
    }
    cout<<product;
}