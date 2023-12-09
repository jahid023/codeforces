#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b,c;
    int i,l;
    cin>>a;
    l = a.length();

    for(i=0;i<l;i++)
    {

        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='Y')
        {
            continue;
        }
        else
        {
            c+='.';
            c+=towlower(a[i]);
        }
    }

    cout<<c<<endl;

    return 0;
}
