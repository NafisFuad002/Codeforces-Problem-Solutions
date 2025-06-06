#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,m;
    sf n;
    m=tgamma(n+1)/(2*tgamma(n-1));
    int j=0,k=1;
    ll arr[n];
    ll res,ans=10000000;
    for(int i=0; i<n; i++)
    {
        sf arr[i];
    }
    for(int i=1; i<=m; i++)
    {
        if(k==n)
        {
            j++;
            k=j+1;
        }
        res=arr[j]+arr[k]-j+k;
        k++;
        if(res<ans)
        {
            ans=res;
        }
    }
    pf ans;
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
