#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
 string first_digit(int n)
{
    string str= to_string(n);
    string ss=str.at(0);
    return move(ss);
}
int main()
{
    int n=456;
    cout<<first_digit(n);
}
