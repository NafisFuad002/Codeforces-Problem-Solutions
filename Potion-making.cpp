//https://codeforces.com/problemset/problem/1525/A
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
    int a,b,k,temp,x,y;
    sf k;
    a=(k>=100-k) ? 100-k:k;
    b=100-a;
    x=a;
    y=b;
    while(a>0)
    {
        temp=a;
        a=b%a;
        b=temp;
    }
    x=x/b;
    y=y/b;
    pf x+y;
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
