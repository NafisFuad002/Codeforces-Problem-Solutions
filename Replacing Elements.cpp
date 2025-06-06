#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,d,flag=0;
    sf n>>d;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int c;
        sf c;
        v.push_back(c);
        if(c>d)
        {
            flag=1;
        }
    }
    sort(v.begin(),v.end());
    if(flag==0)
    {
        pf "YES";
    }
    else if(v[0]+v[1] <= d)
    {
        pf "YES";
    }
    else
    {
        pf "NO";
    }
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
