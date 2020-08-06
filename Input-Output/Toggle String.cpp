#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int l=s.length();
    for(int i=0; i<l; i++)
    {
        char c;
        c=s.at(i);
        int num=(int)c;
       // cout<<num<<endl;
       if(num>=65&&num<=90)
       {
           num=num+32;
           cout<<(char)num;
       }
       else if (num>=97&&num<=122)
       {
           num=num-32;
           cout<<(char)num;
       }
    }
}