#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long int A,B;
	    int N;
	    
	    cin>>N;
	    int chef=0,morty=0;
	    while(N--)
	    {
	        cin>>A>>B;
	        int c=0,m=0;
	        while(A>0)
	        {
	            int sum=0;
	            
	            int p=A%10;
	            
	            c=c+p;//power of card
	            A=A/10;
	        }
	        while(B>0)
	        {
	            int sum=0;
	            
	            int p=B%10;
	            
	            m=m+p;
	            B=B/10;
	        }
	        if(c>m)
                chef++;
	        else if(c<m)
	            morty++;
	       else if(c==m)
	       {
	           chef++;
	           morty++;
	       }
	      
	    }
	    if(chef>morty)
	        cout<<"0 "<<chef<<"\n";
	    else if(chef<morty)
	        cout<<"1 "<<morty<<"\n";
	    else if(chef==morty)
	       cout<<"2 "<<chef<<"\n";
	}
	return 0;
}
