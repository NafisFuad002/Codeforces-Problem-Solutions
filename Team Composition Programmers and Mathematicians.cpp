#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    ll a,b;
    sf a>>b;
    if(a+b < 4)
    {
        pf "0";
    }
    else if(a==0 || b==0)
    {
        pf "0";
    }
    else
    {
        ll t=(a+b)/4;
        if(a<t)
        {
            t=a;
        }
        if(b<t)
        {
            t=b;
        }
        pf t;
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
