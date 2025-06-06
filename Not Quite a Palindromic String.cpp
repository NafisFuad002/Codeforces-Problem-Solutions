//https://codeforces.com/contest/2114/problem/B
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
    ll n,k,l;
    sf n>>k;
    string s;
    sf s;
    ll a=0,b=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='0')
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    l=(n/2)-k;
    a-=(l);
    b-=(l);
    if(a>=0 && b>=0 && a%2==0 && b%2==0 && (a+b)/2==k)
    {
        py
    }
    /*else if(b==l+(k*2) && a==l)
    {
        py
    }*/
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
