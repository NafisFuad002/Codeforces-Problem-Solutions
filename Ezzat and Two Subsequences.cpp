#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    ll mx=INT_MIN,v,sum=0;
    double k;
    int n;
    sf n;
    for(int i=0; i<n; i++)
    {
        sf v;
        sum+=v;
        if(mx<=v)
        {
            mx=v;
        }
    }
    k=mx+((sum-mx)/(double)(n-1));
    pf setprecision(19);
    pf k;
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
