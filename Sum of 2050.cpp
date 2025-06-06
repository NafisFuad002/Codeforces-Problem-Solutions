//https://codeforces.com/problemset/problem/1517/A
#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long
#define py pf "YES"; nl
#define pn pf "NO"; nl

int digit_counter(ll n)
{
    int m=0;
    while(n>0)
    {
        m++;
        n/=10;
    }
    return m;
}

void fun()
{
    ll n,k=0;
    sf n;
    if(n<2050)
    {
        pf "-1";
    }
    else
    {
        while(n>=2050)
        {
            int d=digit_counter(n);
            ll x=pow(10,d-4);
            if(n<(2050*x))
            {
                x/=10;
            }
            n-=(2050*x);
            k++;
        }
        if(n==0)
        {
            pf k;
        }
        else
        {
            pf "-1";
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
