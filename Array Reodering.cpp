//https://codeforces.com/problemset/problem/1535/B
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
    int n,ec=0,oc,eans,oans=0,j=-1,m=-1;
    sf n;
    ll arr[n],v;
    for(int i=0; i<n; i++)
    {
        sf arr[i];
        if(arr[i]%2==0)
        {
            ec++;
        }
    }
    oc=n-ec;
    ll oa[oc];
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2!=0)
        {
            oa[++m]=arr[i];
        }
    }
    sort(oa,oa+oc);
    eans=((n*(n-1))/2)-(((n-ec)*(n-ec-1))/2); //even number gulor jonno koita pair:

    //odd number gulor moddhe koita pair possible:
    for(int i=0; i<m; i++)
    {
        for(int k=i+1; k<=m; k++)
        {
            v=gcd(oa[k],oa[i]);
            if(v>1)
            {
                oans++;
            }
        }
    }
    pf eans+oans;
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
