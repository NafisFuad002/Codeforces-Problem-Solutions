#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long
#define py pf "YES"; nl
#define pn pf "NO"; nl

void fun()
{
    ll a,b,c,d;
    sf a>>b>>c;
    d=a+(b*2)+(c*3);
    if(d%2==0)
    {
        pf "0";
        nl
    }
    else
    {
        pf "1";
        nl
    }
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
