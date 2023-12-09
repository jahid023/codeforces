#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int a,i,b=0,c=0;
    cin>>a;
    char s;

    for(i=1;i<=a;i++)
    {
        cin>>s;

        if(s == 'A')
        {
            b++;
        }
        else
        {
            c++;
        }
    }
    if(b>c)
    {
        cout<<"Anton"<<endl;
    }
    else if(b==c)
    {
        cout<<"Friendship"<<endl;
    }
    else
    {
        cout<<"Danik"<<endl;
    }

    return 0;
}
