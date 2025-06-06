#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long

void fun()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b && b<c)
    {
        cout<<"STAIR"<<nl;
    }
    else if(a<b && b>c)
    {
        cout<<"PEAK"<<nl;
    }
    else
    {
        cout<<"NONE"<<nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t>0)
    {
        fun();
        t--;
    }

    return 0;
}
