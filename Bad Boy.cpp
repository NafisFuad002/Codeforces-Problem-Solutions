//https://codeforces.com/problemset/problem/1537/B
#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long
#define py pf "YES"; nl
#define pn pf "NO"; nl

int gcd(ll a,ll b);

void fun()
{
    ll n,m,i,j;
    sf n>>m>>i>>j;
    pf "1 1 "<<n<<" "<<m; nl
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    int t=1;
    sf t;
    while(t>0)
    {
       fun();
       t--;
    }

    return 0;
}
int gcd(ll a,ll b)
{
    while(b!=0)
    {
        ll temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
