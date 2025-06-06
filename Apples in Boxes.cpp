//https://codeforces.com/contest/2107/problem/B
#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long
#define pt pf "Tom"; nl
#define pj pf "Jerry"; nl

void fun()
{
    ll n,k,sum=0;
    sf n>>k;
    ll arr[n];
    for(ll i=0; i<n; i++)
    {
        sf arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    if(arr[n-1]-arr[0]>k+1)
    {
        pj
    }
    else if(arr[n-1]-arr[0]>k && arr[n-1]==arr[n-2])
    {
        pj
    }
    else if(sum%2==0)
    {
        pj
    }
    else
    {
        pt
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
