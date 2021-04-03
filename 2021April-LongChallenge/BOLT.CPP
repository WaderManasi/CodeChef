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
	    float k1,k2,k3,v;
	    cin>>k1>>k2>>k3>>v;
	    float prod=(k1*k2*k3*v);
	    float ans=100/prod;
	    
	    //rounding answer upto 2 decimal places
	    float final_ans = round(ans*100.0)/100.0;
	    
	    if(final_ans < 9.57 )
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}
	return 0;
}
