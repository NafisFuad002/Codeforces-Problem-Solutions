#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    ll n,k,sum=0,counter=0;
    sf n>>k;
    ll rg[n],lg[n];
    vector<ll>v;
    for(ll i=0; i<n; i++)
    {
        sf lg[i];
    }
    for(ll i=0; i<n; i++)
    {
        sf rg[i];
    }

    for(ll i=0; i<n; i++)
    {
        if(lg[i]>=rg[i])
        {
            sum+=lg[i];
            v.push_back(rg[i]);
        }
        else
        {
            sum+=rg[i];
            v.push_back(lg[i]);
        }
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(ll i=0; counter<k-1; i++)
    {
        sum+=v[i];
        counter++;
    }
    pf sum+1;
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
