#include <bits/stdc++.h> 
using namespace std; 
bool isPalindrome(int); 
  
bool isPalindrome(int n) 
{   
    int divisor = 1; 
    while (n / divisor >= 10) 
        divisor *= 10; 
  
    while (n != 0) 
    { 
        int leading = n / divisor;  
        int trailing = n % 10; 
 
        if (leading != trailing)   
            return false; 
  
        n = (n % divisor) / 10; 
  
        divisor = divisor / 100; 
    } 
    return true; 
} 

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
     int n;
     cin>>n;
     isPalindrome(n) ? cout << "wins\n" : 
    cout << "losses\n"; 
    }
    
    return 0; 
}  