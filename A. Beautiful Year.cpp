#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,y,temp;
    cin>>y;

    while(1)
    {
        y++;
        temp=y;
        a=temp%10;
        temp=temp/10;
        b=temp%10;
        temp=temp/10;
        c=temp%10;
        temp=temp/10;
        d=temp%10;

        if(a!=b && a!=c & a!=d && b!=c &&b!=d && c!=d)
        {
            break;
        }

    }

    cout<<y<<endl;

    return 0;
}
