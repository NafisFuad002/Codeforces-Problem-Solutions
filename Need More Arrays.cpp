//https://codeforces.com/contest/2114/problem/C
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
    ll n,counter=1,temp,prev;
    sf n;
    sf prev;
    for(ll i=1; i<n; i++)
    {
        sf temp;
        if(prev+1<temp)
        {
            prev=temp;
            counter++;
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
