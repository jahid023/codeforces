#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string a;
    cin>>a;
    sort(a.begin(),a.end());
    int count = 0,l,i;
    l=a.length();

    for(i=0;i<l;i++)
    {
        if(a[i]!=a[i+1])
        {
            count++;
        }
    }

    if(count%2==0)
    {
        cout<<"CHAT WITH HER!";
    }

    else
    {
        cout<<"IGNORE HIM!";
    }

    return 0;
}
