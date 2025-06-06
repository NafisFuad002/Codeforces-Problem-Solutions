#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    ll n,m;
    int c=0;
    sf n;
    m=n;
    while(m>0)
    {
        c++;
        m=m/10;
    }
    ll result=n-pow(10,c-1);
    pf result;
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
