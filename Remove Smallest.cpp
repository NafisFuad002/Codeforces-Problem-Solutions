#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,breakpoints=0;
    sf n;
    vector<int>arr;
    for(int i=0; i<n; i++)
    {
        int v;
        sf v;
        arr.push_back(v);
    }
    sort(arr.begin(),arr.end());
    for(int i=0; i<n-1; i++)
    {
        if(arr[i+1]-arr[i] > 1)
        {
            breakpoints++;
        }
    }
    if(breakpoints!=0)
    {
        pf "NO";
    }
    else
    {
        pf "YES";
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
