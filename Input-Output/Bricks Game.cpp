#include <iostream>
 using namespace std;
  int main()
  {
    int n;
    cin>>n;
    int b=n;
    int p=0;
    int m=0;
    for(int i=1; i<=n; i++)
    {
        if(b>0)
        {
            b=b-i;
            if(b<=0)
            {
                cout<<"Patlu";
            }
        }

        if(b>0)
        {
            b=b-(2*i);
            if(b<=0)
            {
                cout<<"Motu";
            }
        }

        
    }
        

        
  }
  