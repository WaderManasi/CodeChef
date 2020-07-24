#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long int ct=0;
	    long int N,n,v[1000000];
	    cin>>N;
	  
	    for(int i=0;i<N;i++)
	    {
	        cin>>v[i];
	    }
	        for(int j=0;j<N-1;j++)
	        {
	            if(v[j]==v[j+1] || abs(v[j]-v[j+1])==1)
	                ct=ct+0;
	            else
	            {
	                ct=ct+(abs(v[j]-v[j+1])-1);
	                //cout<<ct<<"* \n";
	            }
	        }
	      cout<<ct<<"\n";
	     
	}
	return 0;
}
