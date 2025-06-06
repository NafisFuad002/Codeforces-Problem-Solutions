#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,t,os=0,ts=0;
    sf n;
    for(int i=1; i<=n; i++)
    {
        sf t;
        if(t==1)
        {
            os++;
        }
        else
        {
            ts++;
        }
    }
    if(n==1)
    {
        pf "NO";
    }
    else if(os%2==0 && os>0)
    {
        pf "YES";
    }
    else if(os==0 && ts%2==0)
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
