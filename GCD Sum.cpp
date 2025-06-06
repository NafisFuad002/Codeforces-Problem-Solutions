#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

ll gcd(ll n)
{
    ll m;
    m=n;
    ll sum=0,i;
    while(m!=0)
    {
        sum+=m%10;
        m=m/10;
    }
    for(i=sum; i>0; i--)
    {
        if(sum%i==0 && n%i==0)
        {
            break;
        }
    }
    if(i==1)
    {
        return gcd(n+1);
    }
    else
    {
        return n;
    }
}

void fun()
{
    ll n;
    sf n;
    ll x=gcd(n);
    pf x;

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
