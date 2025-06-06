#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define sf cin>>
#define pf cout<<
#define ll long long

void fun()
{
    int n,counter=0;
    sf n;
    pair<int,int>p[n];
    for(int i=0; i<n; i++)
    {
        sf p[i].first;
        sf p[i].second;
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(p[i].first==p[j].second)
            {
                counter++;
            }
            if(p[j].first==p[i].second)
            {
                counter++;
            }
        }
    }
    pf counter;
    nl
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    fun();

    return 0;
}
