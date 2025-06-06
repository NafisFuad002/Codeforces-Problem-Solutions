#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define sf cin>>
#define pf cout<<
#define ll long long

void fun()
{
    ll x,y,a=0,b=0,c=0,d=0;
    sf x>>y;
    if(x>0 && y>0)
    {
        b=x+y;
        c=x+y;
    }
    else if(x<0 && y>0)
    {
        a=x-y;
        d=y-x;
    }
    else if(x<0 && y<0)
    {
        a=x+y;
        d=y+x;
    }
    else
    {
        b=y-x;
        c=x-y;
    }
    //print
    if(a>c)
    {
        pf c<<" "<<d<<" "<<a<<" "<<b;
    }
    else
    {
        pf a<<" "<<b<<" "<<c<<" "<<d;
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
