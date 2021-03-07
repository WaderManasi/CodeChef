#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    lli power,health;
	    cin>>health>>power;
	    
	    while(power>0 && health>0)
	    {
	        health=health - power;
	        power=power/2;
	    }
	    
            if(health <= 0 )
	        cout<<"1"<<endl;
	        else
	        cout<<"0"<<endl;
	}
	return 0;
}
