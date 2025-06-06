//https://codeforces.com/contest/2102/problem/B
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
    ll n,b=0,s=0,temp,x;
    sf n;
    sf x;
    x=abs(x);
    for(int i=1; i<n; i++)
    {
        sf temp;
        temp=abs(temp);
        if(temp>x)
        {
            b++;
        }
        else if(temp==x)
        {
            s++;
        }
        else
        {
            s++;
        }
    }
    if(b>=s)
    {
        py
    }
    else if(s-1==b)
    {
        py
    }
    else
    {
        pn
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
