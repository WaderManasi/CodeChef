#include <bits/stdc++.h>

using namespace std;

int main() {
int t,l=0,u=0;
cin>>t;
while(t--)
{
    int n;
    vector<int>v;
    cin>>n;
    v.push_back(n);
    if(n%2==0)
        l++;
    else if(n%2==1)
        u++;
}
 if(l>u)
    cout<<"READY FOR BATTLE\n";
else
    cout<<"NOT READY\n";
	return 0;
}
