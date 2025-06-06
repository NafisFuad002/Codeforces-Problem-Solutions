#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    ll n,tv,l=INT_MAX,sum=0;
    sf n;
    for(ll i=0; i<n; i++)
    {
        sf tv;
        sum+=tv;
        if(tv<l)
        {
            l=tv;
        }
    }
    pf sum-(n*l);
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
