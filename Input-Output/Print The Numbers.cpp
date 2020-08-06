#include <iostream>
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
    for(int j=0; j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
}