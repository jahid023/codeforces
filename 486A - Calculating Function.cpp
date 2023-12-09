#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,i;

    cin>>a;

    if(a%2==0){
        cout<<a/2<<endl;
    }
    else{
        i= -((a/2)+1);
        cout<<i<<endl;
    }
    return 0;
}
