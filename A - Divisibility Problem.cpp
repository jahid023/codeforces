#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++){

        long long int a,b;
        int c;
        cin>>a>>b;

        if(a%b==0){
            cout<<"0"<<endl;
        }
        else{
            c=b-(a%b);
            cout<<c<<endl;
        }
    }

    return 0;
}
