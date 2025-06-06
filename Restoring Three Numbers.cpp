#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define sf cin>>
#define pf cout<<
#define ll long long

void fun()
{
    ll a,b,c,d;
    sf a>>b>>c>>d;
    if(a>b && a>c && a>d)
    {
        pf a-b<<" "<<a-c<<" "<<a-d;
    }
    else if(b>a && b>c && b>d)
    {
        pf b-a<<" "<<b-c<<" "<<b-d;
    }
    else if(c>a && c>b && c>d)
    {
        pf c-a<<" "<<c-b<<" "<<c-d;
    }
    else
    {
        pf d-a<<" "<<d-b<<" "<<d-c;
    }
    nl
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    fun();

    return 0;
}
