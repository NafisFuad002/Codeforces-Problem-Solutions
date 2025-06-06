#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    ll n,mx,mi,temp;
    sf n;
    sf mx;
    mi=mx;
    for(ll i=1; i<n; i++)
    {
        sf temp;
        if(temp>mx) mx=temp;
        else if(temp<mi) mi=temp;
    }
    pf mx-mi;
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
