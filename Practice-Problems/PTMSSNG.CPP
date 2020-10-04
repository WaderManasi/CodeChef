# include <bits/stdc++.h>
using namespace std;

int ExOR(vector<long long int> arr,long long int size) {
    long long int odd=0;

    //corection
    odd=arr[0];
    
    for(int i=1; i<size; i++) {
    odd = odd ^ arr.at(i);
    }
    return odd;
}

int main()
{
int T;
cin >> T;

while(T--) {
    long long int N, n,i;
    long long int x, y;
    vector<long long int> X, Y;
    cin >>N;
    n=4*N-1;
    for(i=0; i<n; i++) {
    cin >> x >> y;
    X.push_back(x);
    Y.push_back(y);
    }
    //newX=ExOR(X,n);
    //newY=ExOR(Y,n)
    cout<<ExOR(X,n)<<" "<<ExOR(Y,n)<<"\n";
}
return 0;
}