#include <iostream>
#include<vector>
using namespace std;

int main() {
    int T,N,no;
int i;
    vector<int>pos;
    vector<string>disp;
    cin>>T;
    for(int l=1;l<=T;l++)
    {
        pos.clear();
        cin>>N;
        for(i=0;i<N;i++)
       {
           cin>>no;
           if(no==1)
               pos.push_back(i+1);
       }
       for(i=pos.size()-1;i>0;i--)
       {
           if((pos.at(i)-pos.at(i-1))<6)
            {
                disp.push_back("NO");
                break;
            }
       }
        if(i==0)
            {
                disp.push_back("YES");
            }
    }      
    for(i=0;i<disp.size();i++)
       cout<<disp.at(i)<<"\n";
    return 0;
}
