#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    char s;
	    cin>>s;
	    switch(s)
	    {
	        case 'B':
	        case 'b':
	                cout<<"BattleShip\n";
	                break;
	        case 'C':
	        case 'c':
	                cout<<"Cruiser\n";
	                break;
	       case 'd':
	       case 'D':
	                cout<<"Destroyer\n";
	                break;
	       case 'F':
	       case 'f':
	                cout<<"Frigate\n";
	                break;
	    }
	}
	return 0;
}
