#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
    lli t;
	cin>>t;
	while(t--)
	{
	    lli n,k,val=0;
	    lli sum=0,ct=1,sum1=0;
	    cin>>n>>k;
	    int flag=1;
	    lli v[n];
	    for(lli i=0;i<n;i++)
           {
               cin>>v[i];
               sum1+=v[i];
           }
	    for(lli i=0;i<n;i++)
	    {
	       sum+=v[i];
	       
	       if(sum<k)
	       {
	           cout<<ct<<"\n";
	           flag=0;
	           break;
	       }
	       ct++;
	       sum-=k;
	       if(i==n-1)
	       {
	           ct=0;
	            ct=(sum1/k);
	            ct++;
	            break;
	       }
	    }
	    if(flag==1)
	    cout<<ct<<"\n";
	}
	return 0;
}