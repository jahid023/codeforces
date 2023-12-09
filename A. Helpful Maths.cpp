#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int n= a.size();
    int i,j,temp;

    for(i=0;i<n;i=i+2)
    {
        for(j=0;j<n-1;j=j+2)
        {
            if(a[j]>a[j+2])
            {
                temp=a[j];
                a[j]=a[j+2];
                a[j+2]=temp;
            }
        }
    }
    cout<<a;
    return 0;
}
