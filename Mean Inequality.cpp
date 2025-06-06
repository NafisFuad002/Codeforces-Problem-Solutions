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
    n+=n;
    ll arr[n];
    for(int i=0; i<n; i++)
    {
        sf arr[i];
    }
    sort(arr,arr+n);
    for(int i=0,j=n-1; i<=j; i++,j--)
    {
        pf arr[i]<<" ";
        if(i!=j)
        {
            pf arr[j]<<" ";
        }
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
