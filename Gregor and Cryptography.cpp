#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    ll p;
    sf p;
    if(p==5)
    {
        pf "2 4";
        nl
    }
    else
    {
        p=p-1;
        pf "2 "<<p/2;
        nl
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
