#include<iostream>
using namespace std;

int main()
{
    int n,i,loc=0;
    cin>>n;

    int a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];

        if(a[i]==1)
        {
            loc=1;
            break;
        }
    }

    if(loc==1)
        cout<<"HARD"<<endl;

    else
        cout<<"EASY"<<endl;

    return 0;
}
