
#include<iomanip>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long int w;
	float in,bal;
	cin>>w>>in;
	if(w%5==0)
	{
	    if(w+0.5<=in)
	    {
	    bal=in-w-0.50;
	    }
	    else
	    bal=in;
	    cout<<fixed<<setprecision(2)<<bal;
	}
	else
	cout<<fixed<<setprecision(2)<<in;
	
	return 0;
}
