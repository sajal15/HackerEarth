#include <iostream>
#include <cmath>
using namespace std;
int main()
{  
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int g,p;
        cin>>g>>p;
        int max=fmax(g,p);
        int min=fmin(g,p);
        int n;
        cin>>n;
        //int arrg[10];
        //int arrp[10];
        int sumg=0;
        int sump=0;
        for(int j=0; j<n; j++)
        {
            int gg,pp;
            cin>>gg>>pp;
            //arrg[j]=gg;
            //arrp[j]=pp;
            sumg=sumg+gg;
            sump=sump+pp;
        }
        int more=fmax(sump,sumg);
        int less=fmin(sump,sumg);
        int cost=0;
        cost=(more*min)+(less*max);
        cout<<cost<<endl;
    }
}

    