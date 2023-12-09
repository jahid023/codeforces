#include<iostream>
using namespace std;
int main()
{
    int n,i,temp=0;
    cin>>n;

    int a,l,r=0;
    for(i=1;i<=n;i++)
    {
        cin>>l>>a;
        r=(r-l)+a;
        if(r>=temp)
        {
            temp = r;
        }

    }
    cout<<temp<<endl;

    return 0;
}
