#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    ll k,m;
    sf k;
    if((int)sqrt(k) == (double)sqrt(k))
    {
        m=sqrt(k);
    }
    else
    {
        m=sqrt(k);
        m++;
    }
    if((m*m)-k+1 == m) pf m<<" "<<m;
    else if((m*m)-k+1 < m) pf m<<" "<<(m*m)-k+1;
    else pf m-(((m*m)-k+1)-m)<<" "<<m;

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
