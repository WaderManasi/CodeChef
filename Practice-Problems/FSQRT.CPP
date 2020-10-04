#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main() {
int t;
vector<int>v;
long int n;
int r;
cin>>t;
while(t>0)
{
    cin>>n;
    r=sqrt(n);
    v.push_back(r);
    t--;
}
for(auto i=v.begin();i!=v.end();i++)
    cout<<*i<<"\n";
	return 0;
}
