//https://codeforces.com/contest/2091/problem/C
#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    ll n;
    sf n;
    if(n%2==0)
    {
        pf "-1";
    }
    else
    {
        for(ll i=1; i<=n; i+=2)
        {
            pf i<<" ";
        }
        for(ll i=2; i<=n; i+=2)
        {
            pf i<<" ";
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
