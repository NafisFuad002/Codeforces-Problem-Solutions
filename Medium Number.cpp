//https://codeforces.com/problemset/problem/1760/A
#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int a,b,c,sum;
    sf a>>b>>c;
    sum=a+b+c;
    sum-=max(max(a,b),c);
    sum-=min(min(a,b),c);
    pf sum;
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
