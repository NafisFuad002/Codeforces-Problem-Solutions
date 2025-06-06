#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,m,r;
    sf n;
    m=n/10;
    if(n%7==0)
    {
        pf n;
        nl
    }
    else
    {
        r=n%7;
        if((n-r)/10==m)
        {
            pf n-r;
            nl
        }
        else
        {
            pf n+7-r;
            nl
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
