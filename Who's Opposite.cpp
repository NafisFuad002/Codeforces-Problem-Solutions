#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    ll a,b,c,n;
    sf a>>b>>c;
    n=abs(a-b);
    int m=n*2;
    if(m<a || m<b || m<c)
    {
        pf "-1";
    }
    else if(n+c > m)
    {
        pf c-n;
    }
    else
    {
        pf n+c;
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
