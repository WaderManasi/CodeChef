#include<string>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int t,a;
    vector<int>v;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        int p=n%10;
        while(n>0)
        {
            int q=n%10;
            n=n/10;
            a=q;
        }
        int ans=a+p;
        v.push_back(ans);
        t--;
    }
    for(auto i=v.begin();i!=v.end();++i)
cout<<*i<<"\n";
	return 0;
}
