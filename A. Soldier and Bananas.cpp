#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int a,b,c,sum=0,i,r;
    cin>>a>>b>>c;

    for(i=1;i<=c;i++)
    {
        sum = sum + (a*i);
    }

    r=sum-b;

    if(r>=0)
    {
        cout<<r<<endl;
    }
    else
        cout<<"0"<<endl;

    return 0;
}
