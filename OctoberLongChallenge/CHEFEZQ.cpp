#include<iostream> 
#include <bits/stdc++.h> 
using namespace std; 
  
int main(){
int t,n;
long long int k, p, sum, ans;
    cin >> t;
    while(t--){
        n=0,k=0,p=0,ans=0,sum=0;
        cin >> n >> k;
        while(n--){
            cin >> p;
            sum = sum + p;
        }
        ans=sum/k;
        ans++;
        cout << ans << endl;
    }
    return 0;
}
