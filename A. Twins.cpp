#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
 int main()
 {
     int a,i,c=0,d=0,e=0,j;
     cin>>a;
     int b[a];

     for(i=0;i<a;i++)
     {
         cin>>b[i];
         c+=b[i];
     }
     c=c/2;
     sort(b,b+a);

     for(j=(a-1);j>=0;j--)
     {
         d+=b[j];
         e++;
         if(d>c)
            break;
     }

     cout<<e<<endl;

     return 0;
 }
