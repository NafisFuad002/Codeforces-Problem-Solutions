#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n;
    ll h;
    sf n>>h;
    vector<ll>v;
    for(int i=0; i<n; i++)
    {
        ll var;
        sf var;
        v.push_back(var);
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    if(h<=v[0])
    {
        pf "1";
    }
    else if(h<=v[0] + v[1])
    {
        pf "2";
    }
    else
    {
        ll m=h/(v[0] + v[1]);
        m=m*2;
        ll k=h%(v[0] + v[1]);
        if(k!=0)
        {
            if(k<=v[0])
            {
                m++;
            }
            else
            {
                m=m+2;
            }
        }
        pf m;
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
