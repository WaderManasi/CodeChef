#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    int i=0,ct=0,flag=0;
	    for( i=0;i<s.length();i++)
	    {
	        if(s[i]=='1')
	        {
	            flag=1;
	            //ct++;
	        }
	        if(flag==1 && s[i]=='0')
            {
	            ct++;
	            flag=0;
            }
	    }
	    if(s[s.length()-1]=='1')
	    ct++;
	    cout<<ct<<"\n";
	}
	return 0;
}
