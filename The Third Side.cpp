//https://codeforces.com/contest/2074/problem/B
#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,temp;
    sf n;
    list<int>v;
    for(int i=0; i<n; i++)
    {
        sf temp;
        v.push_back(temp);
    }
    while(v.size()>1)
    {
        temp=v.front();
        v.pop_front();
        temp+=v.front();
        v.pop_front();
        v.push_back(--temp);
    }
    pf v.front();nl
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
