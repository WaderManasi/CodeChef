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
	    int flag=0;
	    lli n,k,x,y,v;
	    cin>>n>>k>>x>>y;
	    v=0;
	    for(int i=0;i<n;i++)
	    {
	        x=(x+k)%n;
	        if(x==y)
	        {
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}
	return 0;
}
