#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int n,b=0;
    cin>>a;
    n=a.size();

    for(int i=0;i<n;i++){
        if(a[i]=='H'||a[i]=='Q'||a[i]=='9'){
            b=1;
            break;
        }
    }
    if(b==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
