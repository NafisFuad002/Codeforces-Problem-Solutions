//https://codeforces.com/contest/2075/problem/A
#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    ll k,n;
    sf n>>k;
    if(n%2==1 && k%2==1)
    {
        n-=k;
        k--;
        if(n%k==0)
        {
            pf (n/k)+1;
        }
        else
        {
            pf (int)(n/k)+2;
        }
    }
    else if(n%2==1 && k%2==0)
    {
        n-=(k-1);
        if(n%k==0)
        {
            pf (n/k)+1;
        }
        else
        {
            pf (int)(n/k)+2;
        }
    }
    else if(n%2==0 && k%2==1)
    {
        k--;
        if(n%k==0)
        {
            pf (n/k);
        }
        else
        {
            pf (int)(n/k)+1;
        }
    }
    else if(n%2==0 && k%2==0)
    {
        if(n%k==0)
        {
            pf (n/k);
        }
        else
        {
            pf (int)(n/k)+1;
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
