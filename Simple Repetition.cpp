#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    ll x;
    int k,flag=0;
    sf x>>k;
    for(ll i=2;  i<=sqrt(x); i++)
    {
        if(x%i==0)
        {
            flag=1;
            break;
        }
    }
    if(x==1 && k==2)
    {
        pf "YES";
    }
    else if(x==1)
    {
        pf "NO";
    }
    else if(flag==0 && k==1)
    {
        pf "YES";
    }
    else
    {
        pf "NO";
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
