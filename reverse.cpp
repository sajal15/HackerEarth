#include <iostream>
using namespace std;

void reverse(int n, int arr[])
{
    for(int i=0; i<n; i++)
    {
        int element=arr[i];
        int reversedNumber;
        int remainder;
        while(element != 0)
    {
        remainder = element%10;
        reversedNumber = reversedNumber*10 + remainder;
        element /= 10;
    }
        cout<<reversedNumber<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int element;
    for(int i=0; i<n; i++)
	{
		cin>>element;
		arr[i]=element;
	}
    reverse(n,arr);

}