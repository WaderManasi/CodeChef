#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if(n==2)    return true;
    if(n==1 || n%2==0)  return false;
    for(int i=2;i<n;i++)
    {
        if(n%i == 0)
        return false;
    }
    return true;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y;
	    int sum=x+y+1;
	    if(isPrime(sum))
	        cout<<"1\n";
	    else
	    {
	        int ct=1;
	        while(!isPrime(sum))
	        {
	            sum=sum+1;
	            ct++;
	        }
	        cout<<ct<<"\n";
	    }
	    
	}
	return 0;
}
