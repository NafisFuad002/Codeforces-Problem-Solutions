#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    ll n,s,c;
    sf n;
    s=n-2;
    //s=s/2;
    multiset<ll>arr;
    for(ll i=0; i<n; i++)
    {
        //ll c;
        sf c;
        arr.insert(c);
    }
    for(ll i=1; i<=s; i++)
    {
        ll a;
        if(s%i==0)
        {
            a=s/i;

            if(i==a)
            {
                ll c=arr.count(i);
                if(c>=2)
                {
                    pf a<<" "<<i;
                    nl
                    break;
                }
            }
            else
            {
                ll c1=arr.count(a);
                ll c2=arr.count(i);
                if(c1>0 && c2>0)
                {
                    pf a<<" "<<i;
                    nl
                    break;
                }
            }
        }
    }
    //pf s;
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
/*
12
7 7 7 7 7 7 5 7 7 2 7 7

*/
