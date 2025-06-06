#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,m;
    sf n>>m;
    if((n==3 || n==2) && (m==3 || m==2))
    {
        pf 2<<" "<<2;nl
    }
    else
    {
        pf 1<<" "<<1;nl
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
