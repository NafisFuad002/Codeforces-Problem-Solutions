#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int a1,a2,b1,b2,c1,c2,way;
    sf a1>>a2>>b1>>b2>>c1>>c2;
    way=abs(a1-b1)+abs(a2-b2);
    if(a1==b1 && b1==c1)
    {
        if((a1>c1 && b1<c1)||(a1<c1 && b1>c1))
        {
            way+=2;
        }
        else if((a2>c2 && b2<c2)||(a2<c2 && b2>c2))
        {
            way+=2;
        }
    }
    else if(a2==b2 && b2==c2)
    {
        if((a1>c1 && b1<c1)||(a1<c1 && b1>c1))
        {
            way+=2;
        }
        else if((a2>c2 && b2<c2)||(a2<c2 && b2>c2))
        {
            way+=2;
        }
    }
    pf way;
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
