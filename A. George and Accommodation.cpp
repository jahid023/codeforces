#include<iostream>
using namespace std;

int main()
{
    int n,i,a,b,count=0;

    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        int c=b-a;
        if(c>1)
        {
           count++;
        }

    }

    cout<<count<<endl;

    return 0;
}
