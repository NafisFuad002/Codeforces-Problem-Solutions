#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    ll n;
    sf n;
    ll m=n/15;
    ll i=(15*m)+1;
    m=m*3;
    m++;
    if(n%15>=2)
    {
        m+=2;
    }
    else if(n%15==1)
    {
        m++;
    }
    if(n==0)
    {
        pf "1";
        nl
    }
    else
    {
        pf m;
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
