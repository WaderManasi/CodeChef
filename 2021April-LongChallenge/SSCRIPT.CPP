    #include <bits/stdc++.h>
    #define lli long long int
    using namespace std;
    int main() {
    	int t;
    	cin>>t;
    	while(t--)
    	{
            int n,k;
            string s;
            cin>>n>>k;
            cin>>s;
            int ct = 0, maxx=0;
            for(int i=0;i<n;i++)
            {
               if(s[i]=='*'){
               ct++;
               maxx=ct>=maxx?ct:maxx;
               }
               else
               ct=0;
            }
            if(maxx>=k)
            cout<<"YES\n";
            else
            cout<<"NO\n";
    	}
    	return 0;
    }
