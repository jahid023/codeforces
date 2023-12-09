#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    cin>>a;
    string b="hello";
    int n,c=0,d=0,i,l;
    n=a.size();
    l=b.size();

    for(i=0;i<n;i++)
    {
        if(a[i]==b[c])
        {
            c++;
            d++;
            if(c==l)
            {
                break;
            }
        }
    }

    if(d==l)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
