#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,h,x;
	cin>>n>>h>>x;
	int arr[n];
	int flag=0;
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	    if(arr[i]+x == h)
	    flag=1;
	}
	if(flag==1)
	    cout<<"YES";
	else
	    cout<<"NO";
	return 0;
}
