
#include<bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int t;
	long int N,n,K,sum=0,loss=0;
	vector<long int>v1;
	
	cin>>t;
	
	while(t--)
	{
	    sum=0;
	    loss=0;
	    cin>>N;
	    cin>>K;
	    for(int i=0;i<N;i++)
	    {
	        cin>>n;
	        sum=sum+n;
	        if(n>K)
	        {
	            loss=loss+K;
	        }
	        else
	        {
	            loss=loss+n;
	        }
	       // v1.push_back(n);
	    }
	    cout<<sum-loss<<"\n";
	}
	return 0;
}
