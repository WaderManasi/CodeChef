#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long int length,breadth,area,peri;
	
	cin>>length;
	cin>>breadth;
	  
	area = length * breadth;
	peri = 2 * (length + breadth);
	
	if(area==peri)
	    cout<<"Eq\n"<<area;
	else if(area>peri)
	    cout<<"Area\n"<<area;
	else
	    cout<<"Peri\n"<<peri;
	return 0;
}
