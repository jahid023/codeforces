#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int n,i,count=0;
    cin>>n;
    string a;
    cin>>a;

    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
