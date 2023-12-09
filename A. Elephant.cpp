#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a;

    if(a%5==0)
    {
        b=a/5;
        cout<<b<<endl;
    }
    else
    {
        c=(a/5)+1;
        cout<<c<<endl;
    }
    return 0;
}
