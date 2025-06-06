#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int l,n,maximum,minimum,on=0,off=0;
    sf l;
    n=2*l;
    int sw[n];
    for(int i=0; i<n; i++)
    {
        sf sw[i];
        if(sw[i]==1)
        {
            on++;
        }
        else
        {
            off++;
        }
    }
    if(on%2==0)
    {
        minimum=0;
    }
    else
    {
        minimum=1;
    }
    if(on<off)1110000000
    {
        maximum=on;
    }
    else
    {
        maximum=off;
    }
    //maximum=abs(on-off);
    pf minimum<<" "<<maximum;
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
