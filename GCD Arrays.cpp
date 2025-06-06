//https://codeforces.com/problemset/problem/1629/B
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
    ll l,r,k,odd_count;
    sf l>>r>>k;
    if(l==r && l>1)
    {
        py
    }
    else
    {
        //odd number koita?
        if(l%2==1 && r%2==1)
        {
            odd_count=(r-l+2)/2;
        }
        else if(l%2==0 && r%2==0)
        {
            odd_count=(r-l)/2;
        }
        else
        {
            odd_count=(r-l+1)/2;
        }
        //k odd number ar thake besi ba soman kina
        if(odd_count<=k)
        {
            py
        }
        else
        {
            pn
        }
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
