#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    vector<lli>v;
	    lli c,val,n;
	    lli sum=0;
	    cin>>n>>c;
	    for(int i=0;i<n;i++)
	    {
	        cin>>val;
	        sum=sum+val;
	    }
	    if(sum>c)
	    cout<<"No\n";
	    else
	    cout<<"Yes\n";
	}
	return 0;
}
