#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    ll r,b,d;
    sf r>>b>>d;
    if(r>b && (d+1)*b>=r)
    {
        pf "YES";
    }
    else if(r<b && (d+1)*r>=b)
    {
        pf "YES";
    }
    else if(r==b)
    {
        pf "YES";
    }
    else
    {
        pf "NO";
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
