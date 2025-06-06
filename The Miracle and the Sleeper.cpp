#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    ll l,r,a;
    sf l>>r;
    if(r%2==0)
    {
        a=(r/2)+1;
    }
    else
    {
        a=(r+1)/2;
    }
    if(l<=a)
    {
        pf r%a;
    }
    else
    {
        pf r%l;
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
