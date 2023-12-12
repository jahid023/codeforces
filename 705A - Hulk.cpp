#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,i;
    cin>>a;
    for(i=1;i<a;i++){
        if(i%2==0){
            cout<<"I love that ";
        }
        else{
            cout<<"I hate that ";
        }
    }
    if(a%2==0){
        cout<<"I love it"<<endl;
    }
    else{
        cout<<"I hate it"<<endl;
    }

    return 0;
}
