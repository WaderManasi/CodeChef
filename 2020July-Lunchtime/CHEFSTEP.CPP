#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;
	while(t>0)
	{
	    long int n,k,num;
	    vector<long int>v;
	    cin>>n>>k;
	    for(int i=0;i<n;i++)
	    {
	        cin>>num;
	        if(num%k==0)
	            v.push_back(1);
	        else
	            v.push_back(0);
	    }
	    for(int i=0;i<v.size();i++)
	        cout<<v.at(i);
	        cout<<"\n";
	        
	       t--;
	}
	
	return 0;
}
