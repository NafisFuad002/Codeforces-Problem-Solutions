//https://codeforces.com/contest/2094/problem/B
#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,m,l,r;
    sf n>>m>>l>>r;
    if(0+m>r)
    {
        pf r-m<<" "<<r;
    }
    else
    {
        pf "0 "<<0+m;
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
