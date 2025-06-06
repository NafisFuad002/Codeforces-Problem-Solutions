#include<bits/stdc++.h>
using namespace std;

#define nl "\n"

void beauty_of_array()
{
    int n,m,sum=0,i;
    cin>>n;
    vector<int>num;
    for(i=0; i<n; i++)
    {
        cin>>m;
        num.push_back(m);
    }
    sort(num.begin(),num.end());
    for(i=n-1; i>0; i--)
    {
        sum=sum+(num[i]-num[i-1]);
    }
    cout<<sum<<nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t>0)
    {
        beauty_of_array();
        t--;
    }

    return 0;
}
