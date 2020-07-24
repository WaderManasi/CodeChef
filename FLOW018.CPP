#include<bits/stdc++.h>
#include<vector>
using namespace std;
int f(int n) 
{ 
   if(n==1 || n==0)
    return 1;
    else
    return n*f(n-1);
}
int main() {
int t;
vector<long int>v;
cin>>t;
while(t>0)
{
    long int n;
    cin>>n;
   long int ans=f(n);
   v.push_back(ans);
t--;
}
for(auto i=v.begin();i!=v.end();i++)
    cout<<*i<<"\n";
return 0;
}