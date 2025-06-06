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
    ll arr[n];
    for(ll i=0; i<n; i++)
    {
        sf arr[i];
    }
    sort(arr,arr+n);
    if(k==0 && arr[0]==1)
    {
        pf "-1";
    }
    else if(k==0)
    {
        pf arr[0]-1;
    }
    else if(k==n)
    {
        pf arr[k-1];
    }
    else if(arr[k-1]==arr[k])
    {
        pf "-1";
    }
    else
    {
        pf arr[k-1];
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
