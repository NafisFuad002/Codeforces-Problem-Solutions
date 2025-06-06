#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    ll a,b,c;
    sf a>>b>>c;
    vector<ll>rec;
    rec.push_back(a);
    rec.push_back(b);
    rec.push_back(c);
    sort(rec.begin(),rec.end());
    a=rec[2];
    b=rec[1];
    c=rec[0];
    if((a==b && c%2==0) || (b==c && a%2==0))
    {
        pf "YES";
        nl
    }
    else if((a==b && c%2!=0) || (b==c && a%2!=0))
    {
        pf "NO";
        nl
    }
    else if(a==b+c)
    {
        pf "YES";
        nl
    }
    else
    {
        pf "NO";
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
