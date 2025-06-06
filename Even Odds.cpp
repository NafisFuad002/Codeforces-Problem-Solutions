#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define sf cin>>
#define pf cout<<
#define ll long long

void fun()
{
    ll n,k;
    sf n>>k;
    if(n%2!=0)
    {
        n++;
    }
    if(k<=n/2)
    {
        pf (2*k)-1;
    }
    else
    {
        k=k-(n/2);
        pf 2*k;
    }
    nl
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    fun();

    return 0;
}
