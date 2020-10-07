#include <iostream>
 using namespace std;
  int main()
  {
    /*
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
    */
    
    int round=0;
    int flag=1;
    int n;
    cin>>n;
    while(n>0)
    {
        round++;
        n=n-round*1;
        if((n-round*2<=0)&&(n>0))
        {
            flag=flag*(-1);
        }
        n=n-round*2;
    }
    if(flag>0)
    {
        cout<<"Patlu"<<endl;
    }
    else
    {
        cout<<"Motu"<<endl;
    }
        

        
  }
  