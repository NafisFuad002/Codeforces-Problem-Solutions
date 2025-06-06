#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long

void fun()
{
    int n,a,b;
    cin>>n>>a>>b;
    int x,y;
    if(n%2==1)
    {
        x=(((n-1)/2)*b)+a;
    }
    else
    {
        x=(n/2)*b;
    }
    y=n*a;
    if(x>y)
    {
        cout<<y<<nl;
    }
    else
    {
        cout<<x<<nl;
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
