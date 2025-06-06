//https://codeforces.com/problemset/problem/1554/A
#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    ll n,m=0,pre,temp;
    sf n;
    sf pre;
    for(ll i=1; i<n; i++)
    {
        sf temp;
        if(temp*pre>m) m=temp*pre;
        pre=temp;
    }
    pf m;
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
