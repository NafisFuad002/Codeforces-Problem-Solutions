#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    ll R,C,x,r,c;
    sf R>>C>>x;
    if(x%R==0)
    {
        r=R;
        c=x/R;
    }
    else
    {
        c=(x/R)+1;
        r=x%R;
    }
    //pf r<<" "<<c;
    pf ((r-1)*C)+c;
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
