#include <bits/stdc++.h>
using namespace std;

int PrimeTest(int N)
{
    for (int i = 2; i*i <= N; ++i)
    {
        if(N%i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main() {
	int t;
	cin>>t;
	while(t-->0)
	{
		int n;
		cin>>n;
		if(PrimeTest(n)==1)
			cout<<"yes\n";
		else
			cout<<"no\n";
	}
	return 0;
}