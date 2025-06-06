//https://codeforces.com/problemset/problem/1374/A
#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    ll x,y,n;
    sf x>>y>>n;
    if(n%x>=y)
    {
        pf n-(n%x)+y;
    }
    else
    {
        n=(n/x)-1;
        pf (n*x)+y;
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
