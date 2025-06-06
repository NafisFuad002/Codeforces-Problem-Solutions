//https://codeforces.com/problemset/problem/622/B
#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int h,m,t;
    char s;
    sf h>>s>>m>>t;
    int hr=t/60;
    hr=hr%24;
    int ml=t%60;
    h=h+hr;
    if(m+ml>=60)
    {
        h++;
    }
    m+=ml;
    if(m>=60)
    {
        m-=60;
    }
    if(h>23)
    {
        h-=24;
    }
    if(h<10)
    {
        pf "0"<<h<<":";
    }
    else
    {
        pf h<<":";
    }
    if(m<10)
    {
        pf "0"<<m;
    }
    else
    {
        pf m;
    }
    nl
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    int t=1;
    //sf t;
    while(t>0)
    {
       fun();
       t--;
    }

    return 0;
}
