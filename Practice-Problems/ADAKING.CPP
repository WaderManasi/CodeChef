#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    long int K;
	    cin>>K;
	    char arr[8][8];
	    for(int i=0;i<8;i++)
	    {
	        for(int j=0;j<8;j++)
	        {
	            arr[i][j]='X';
	        }
	    }
	    arr[0][0]='O';
	    for(int i=1;i<K;i++)
	    {
	        arr[0][i]='.';
	    }
	    for(int i=0;i<8;i++)
	    {
	        for(int j=0;j<8;j++)
	        {
	            cout<<arr[i][j];
	        }
	        cout<<"\n";
	    }
	    cout<<"\n";
	}
	return 0;
}
