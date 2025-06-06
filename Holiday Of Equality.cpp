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
    ll n,mx,sum=0;
    sf n;
    ll arr[n];
    sf arr[0];
    mx=arr[0];
    for(ll i=1; i<n; i++)
    {
        sf arr[i];
        if(mx<arr[i])
        {
            mx=arr[i];
        }
    }
    for(ll i=0; i<n; i++)
    {
        sum+=(mx-arr[i]);
    }
    pf sum; nl
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    int t=1;
    //sf t;
    while(t>0)
    {
       fun();
       t--;
    }

    return 0;
}
