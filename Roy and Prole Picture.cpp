0
#include<iostream>

using namespace std;

int main()

{

int w,h,l,n,i;

cin>>l>>n;

for(i=0;i<n;i++)

{

cin>>w>>h;

if(w<l||h<l)

cout<<"UPLOAD ANOTHER\n";

else if(w==h)

cout<<"ACCEPTED\n";

else if(w>l||h>l)

cout<<"CROP IT"<<endl;

}

return 0;

}