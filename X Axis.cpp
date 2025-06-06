#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int a,b,c,x;
    sf a>>b>>c;
    if(a<=b && a<=c)
    {
        swap(a,c);
    }
    else if(b<=a && b<=c)
    {
        swap(c,b);
    }
    if(b>=a)
    {
        swap(a,b);
    }
    pf (abs(b-a)+abs(b-b)+abs(b-c));
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
