#include <iostream>

using namespace std;

int main() {

int t;

cin>>t;

while(t-->0)

{

    int sh,sm,eh,em,shr,ehr,sub,hr=0,j;

    cin>>sh>>sm>>eh>>em;

    shr=(sh*60)+sm;

    ehr=(eh*60)+em;

    sub=ehr-shr;

    j=sub;

    while((sub=sub-60)>=0)//we get hrs

    {

        j=sub;

        hr++;

    }

    sub=abs(j);

    cout<<hr<<" "<<sub;

    cout<<endl;

}   

}