
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	vector<int>v;
	cin>>t;
	while(t>0)
	{
	    cin>>n;
	    v.push_back(n);
	    t--;
	}
	sort(v.begin(),v.end());
	for(auto i=v.begin();i!=v.end();i++)
	    cout<<*i<<"\n";
	return 0;
}
