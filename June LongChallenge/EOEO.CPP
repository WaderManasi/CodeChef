#include <bits/stdc++.h>
using namespace std;
int power(long long int n)
{
    int ct=0;
    while(n%2!=1)
    {
        ct++;
        n=n/2;
    }
    int powerr=pow(2,ct);
    return powerr;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int ct=0;
        long long int ts;
        cin>>ts;
                if(ts%2!=0)
                {
                   cout<<(ts-1)/2<<"\n";
                }
                else 
                {int t=power(ts);
                ts=ts/t;
                 cout<<(ts-1)/2<<"\n";
                }
            
    }
	// your code goes here
	return 0;
}
