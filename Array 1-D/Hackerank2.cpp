#include <iostream>
using namespace std;

 int main()
 {
     int k;
     cin>>k;
     int size;
     cin>>size;
     int arr[size];
     for(int i=0; i<size; i++)
	{
        int element;
		cin>>element;
		arr[i]=element;
	}
   
    int jump=0;
    for(int i=0; i<size; i++)
    {
        for(int j=size-1; j>=0; j--)
        {
            int sub=arr[j]-arr[i];
            int temp=j-i;
            if(j>i)
            {
                if(sub>=k)
                {
                    if(temp>jump)
                    {
                    jump=j-i;
                    }
                }
                
            }
        }
    }  
    cout<<jump-1;
 }