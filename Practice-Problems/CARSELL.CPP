
#include<bits/stdc++.h>
using namespace std;

int main() {
    int T,i;
    int N,pr,profit,max=0;
    vector<int>P,disp;
    cin>>T;
    while(T--)
    {
        P.clear();
        profit=0;
        cin>>N;
        for(i=0;i<N;i++)
        {
            cin>>pr;
            P.push_back(pr);
        }
        sort(P.begin(),P.end(),greater<int>());
        for(i=0;i<N;i++)
        {
            max=P[i]-i;
            if(max>0)
            {
                profit=profit+max;
                profit=profit%1000000007;
            }
        }
        cout<<profit<<"\n";
    }
    return 0;
}
