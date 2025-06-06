#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    ll a,b,c,d;
    sf a>>b>>c>>d;
    ll x,res;
    if((abs(a-c)>abs(b-d) && a<c) || b>d)
    {
        pf "-1";
    }
    else
    {
        x=abs(b-d);
        a=a+x;
        pf abs(a-c)+x;
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
