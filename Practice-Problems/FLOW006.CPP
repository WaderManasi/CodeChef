#include<bits/stdc++.h>
#include<vector>
#include <iostream>
using namespace std;


int main() {
long int t;
long long int n;
cin>>t;
vector<long int>v;
int ans;
while(t>0)
{
  ans=0;
    cin>>n;
    while(n>0)
    {
        int p=n%10;
        ans=ans+p;
        n=n/10;
    }
    v.push_back(ans);
    t--;
}
for(int i=0;i<v.size();i++)
    cout<<v.at(i)<<"\n";
	return 0;
}
