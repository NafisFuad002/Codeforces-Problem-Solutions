#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n;
    sf n;
    ll t,sum=0;
    for(int i=0; i<n; i++)
    {
        sf t;
        sum+=t;
    }
    if(sum%n==0)
    {
        pf "0";
    }
    else
    {
        pf "1";
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
