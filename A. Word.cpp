#include <iostream>
#include<bits/stdc++.h>
#include <cstring>
using namespace std;

int main() {
	string s;
	cin>>s;
	int countupper=0,countlower=0;
	for(int i=0;i<s.size();i++)
        {
	    if(s[i]>=65 && s[i]<=90)
	    {
	        countupper++;
	    }
    else
        {
	        countlower++;
	    }
	}
	if(countupper>countlower)
	{
	    char ch;
	    for(int i=0;i<s.size();i++)
	    {
	        ch=toupper(s[i]);
	        cout<<ch;
	    }
	}
	else
        {
	    char ch;
	    for(int i=0;i<s.size();i++)
	    {
	        ch=tolower(s[i]);
	        cout<<ch;
	    }
	}
	return 0;
}
