#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,flag=0;
    string s;
    sf n>>s;
    for(int i=1; i<s.length(); i++)
    {
        if(s[i]!=s[i-1])
        {
            pf i<<" "<<i+1;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        pf "-1 -1";
    }
    nl
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    sf t;
    while(t>0)
    {
       fun();
       t--;
    }

    return 0;
}
