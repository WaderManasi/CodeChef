#include <iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes h
	vector<long int>v;
	long int t,n;
	cin>>t;
	while(t>0)
	{
	    v.clear();
	    for(int i=0;i<3;i++)
	    {
	        cin>>n;
	        v.push_back(n);
	    }
	    sort(v.begin(),v.end());
	    cout<<v[v.size()-2]<<"\n";
	    t--;
	}
	
	return 0;
}
