#include <iostream>
using namespace std;
int sum(int size, int arr1[],int arr2[])
{
    int add[size];
    for(int i=0; i<size; i++)
    {
        add[i]=arr1[i]+arr2[i];
    }
    for(int i=0; i<size; i++)
	{
		cout<<add[i]<<" ";
	}
}

int main()
{
    int size;
    cin>>size;
    int arr1[size];
    int arr2[size];
    for(int i=0; i<size; i++)
	{
        int element;
		cin>>element;
		arr1[i]=element;
	}
    for(int i=0; i<size; i++)
	{
        int element;
		cin>>element;
		arr2[i]=element;
	}
    sum(size,arr1,arr2);
}