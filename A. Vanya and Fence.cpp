#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d=0,i;
    cin>>a>>b;

    for(i=1;i<=a;i++)
    {
        cin>>c;
        if(c>b)
        {
            d=d+2;
        }
        else
        {
            d=d+1;
        }
    }

    cout<<d<<endl;

    return 0;
}
