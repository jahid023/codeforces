#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int n=a.size();
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='4' || a[i]=='7')
        {
            count++;
        }
    }
    if(count==4||count==7)
    {
        cout<<"YES"<<endl;
    }

    else
    {
         cout<<"NO"<<endl;

    }

    return 0;
}
