#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    ll n1,n2,n3,n4;
    sf n1>>n2>>n3>>n4;
    if(n1+n2==n3)
    {
        n3=n4;
    }
    sf n4>>n4>>n4;
    pf n1<<" "<<n2<<" "<<n3;
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
