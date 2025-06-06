#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,counter=0;
    ll l,r,k,cost=0;
    sf n>>l>>r>>k;
    vector<ll>arr;
    for(int i=0; i<n; i++)
    {
        ll c;
        sf c;
        arr.push_back(c);
    }
    sort(arr.begin(),arr.end());
    for(int i=0; i<n; i++)
    {
        if(arr[i]>=l && arr[i]<=r)
        {
            if(cost+arr[i] <= k)
            {
                counter++;
                cost+=arr[i];
            }
        }
    }
    pf counter;
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
