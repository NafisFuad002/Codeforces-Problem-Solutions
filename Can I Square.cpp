#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int b;
    ll sum=0;
    sf b;
    while(b>0)
    {
        ll s;
        sf s;
        sum+=s;
        b--;
    }
    if((ll)(sqrt(sum))==(double)(sqrt(sum)))
    {
        pf "YES";
        nl
    }
    else
    {
        pf "NO";
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
