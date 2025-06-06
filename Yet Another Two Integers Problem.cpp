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
    ll c=abs(b-a);

    if(c%10==0)
    {
        pf c/10;
    }
    else
    {
        pf (c/10)+1;
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
