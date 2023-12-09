#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
   string a;
   cin>>a;
   int count1=0;
   int count=0,c;
   int n=a.size();

   for(int i=0;i<n;i++)
   {
       if(a[i]=='1')
       {
           count++;
           count1=0;
       }
       else
       {
           count1++;
           count=0;
       }
       if(count==7 || count1==7)
       {
           c=1;
           break;
       }

   }
   if(c==1)
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;

   return 0;
}
