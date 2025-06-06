#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,co=0;
    sf n;
    pair<int,int>p[4];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            char c;
            sf c;
            if(c=='*' && co==0)
            {
                p[0].first=i;
                p[0].second=j;
                co++;
            }
            else if(c=='*')
            {
                p[1].first=i;
                p[1].second=j;
                co++;
            }
        }
    }
    if(p[0].first!=p[1].first && p[0].second!=p[1].second)
    {
        p[2].first=p[0].first;
        p[2].second=p[1].second;
        p[3].first=p[1].first;
        p[3].second=p[0].second;
    }
    else if(p[0].first==p[1].first)
    {
        if(p[0].first-1<0)
        {
            p[2].first=p[0].first+1;
            p[2].second=p[0].second;
            p[3].first=p[1].first+1;
            p[3].second=p[1].second;
        }
        else
        {
            p[2].first=p[0].first-1;
            p[2].second=p[0].second;
            p[3].first=p[1].first-1;
            p[3].second=p[1].second;
        }
    }
    else
    {
        if(p[0].second-1<0)
        {
            p[2].first=p[0].first;
            p[2].second=p[0].second+1;
            p[3].first=p[1].first;
            p[3].second=p[1].second+1;
        }
        else
        {
            p[2].first=p[0].first;
            p[2].second=p[0].second-1;
            p[3].first=p[1].first;
            p[3].second=p[1].second-1;
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==p[0].first && j==p[0].second)
            {
                pf "*";
            }
            else if(i==p[1].first && j==p[1].second)
            {
                pf "*";
            }
            else if(i==p[2].first && j==p[2].second)
            {
                pf "*";
            }
            else if(i==p[3].first && j==p[3].second)
            {
                pf "*";
            }
            else
            {
                pf ".";
            }
        }
        nl
    }
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
