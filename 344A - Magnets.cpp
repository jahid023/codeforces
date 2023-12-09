#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,i,j,count=0;

    cin>>a;
    int arr[a];

    for(i=0;i<a;i++){
        cin>>arr[i];
        if(i==0){
            count++;
        }
        else{
            if(arr[i]!=arr[i-1]){
                count++;
            }
        }
    }
    cout<<count<<endl;

    return 0;
}
