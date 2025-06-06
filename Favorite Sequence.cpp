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
    ll arr[n];
    for(int i=0; i<n; i++)
    {
        sf arr[i];
    }
    for(int i=0,j=n-1; i<n ; i++,j--)
    {
        if(n%2==0 && i<=(n-2)/2)
        {
            pf arr[i]<<" ";
        }
        else if(n%2!=0 && i<=(n-1)/2)
        {
            pf arr[i]<<" ";
        }
        if(n%2==0 && j>=n/2)
        {
            pf arr[j]<<" ";
        }
        else if(n%2!=0 && j>=(n+1)/2)
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
