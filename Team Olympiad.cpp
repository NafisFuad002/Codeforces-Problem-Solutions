//https://codeforces.com/problemset/problem/490/A
#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long
#define py pf "YES"; nl
#define pn pf "NO"; nl

void fun()
{
    int n,temp,x;
    sf n;
    vector<int>a,b,c;
    for(int i=1; i<=n; i++)
    {
        sf temp;
        if(temp==1)
        {
            a.push_back(i);
        }
        else if(temp==2)
        {
            b.push_back(i);
        }
        else if(temp==3)
        {
            c.push_back(i);
        }
    }
    x=min(min(a.size(),b.size()),c.size());
    pf x; nl
    for(int i=0; i<x; i++)
    {
        pf a[a.size()-1]<<" "<<b[b.size()-1]<<" "<<c[c.size()-1];
        a.pop_back();
        b.pop_back();
        c.pop_back();
        nl
    }
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
