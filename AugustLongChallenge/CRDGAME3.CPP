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
	    lli pc,pr,p1=0,p2=0;
	    cin>>pc>>pr;
	    if(pc<=9)
	    p1=1;
	    else
	    {
	        p1=pc/9;
	        if(pc%9!=0)
	        p1++;
	    }
	    
	    if(pr<=9)
	    p2=1;
	    else
	    {
	        p2=pr/9;
	        if(pr%9!=0)
	        p2++;
	    }
	    if(p1<p2)
	    cout<<"0 "<<p1<<"\n";
	    else
	    cout<<"1 "<<p2<<"\n";
	}
	return 0;
}
