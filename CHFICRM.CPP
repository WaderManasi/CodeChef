#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int N,n,ten=0,five=0,fif=0,flag=0;
	    cin>>N;
	    for(int i=0;i<N;i++)
	    {
	        cin>>n;
	        if(n==5)
	        {
	            five++;
	        }
	        else  if(n==10)
	        {
	            if(five>0)
	            {
	                five--;
	                ten++;
	            }
	            else
	            flag=1;
	            
	        }
	        else  if(n==15)
	        {
	            if(ten>0)
	            {
	                ten--;
	            }
	            else if(five>=2)
	            {
	                five=five-2;
	            }
	            else
	            flag=1;
	        }
	    }
	    if(!flag)
	        cout<<"YES\n";
	    else
	        cout<<"NO\n";
	}
	return 0;
}
