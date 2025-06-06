#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long
#define py pf "YES"; nl
#define pn pf "NO"; nl

void fun()
{
    int flag=0;
    string s,duplicate;
    sf s;
    duplicate=s;
    sort(duplicate.begin(),duplicate.end());
    pf duplicate[0]<<" ";
    for(ll i=0; i<s.length(); i++)
    {
        if(flag==0 && s[i]==duplicate[0])
        {
            flag=1;
        }
        else
        {
            pf s[i];
        }
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
