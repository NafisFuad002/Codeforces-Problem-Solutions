//https://codeforces.com/contest/2091/problem/A
#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int zc=0,oc=0,tc=0,thc=0,fc=0;
    int n,t,m=0,flag=0;
    sf n;
    for(int i=1; i<=n; i++)
    {
        sf t;
        if(t==0)zc++;
        if(t==1)oc++;
        if(t==2)tc++;
        if(t==3)thc++;
        if(t==5)fc++;

        if(flag==0 && zc>=3 && oc>=1 && tc>=2 && thc>=1 && fc>=1)
        {
            m=i;
            flag=1;
        }
    }
    pf m;nl
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
