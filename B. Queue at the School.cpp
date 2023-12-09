#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,b,n;
    cin>>a>>b;
    string c;
    cin>>c;
    n=c.size();

    for(int i=1;i<=b;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(c[j]=='B'&&c[j+1]=='G')
            {
                int temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
                j++;
            }
        }
    }
    cout<<c<<endl;

    return 0;
}
