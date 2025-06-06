#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,w,h,W=0,H=0;
    sf n;
    for(int i=0; i<n; i++)
    {
        sf w>>h;
        if(W<w)
        {
            W=w;
        }
        if(H<h)
        {
            H=h;
        }
    }
    pf (W+H)*2;
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
