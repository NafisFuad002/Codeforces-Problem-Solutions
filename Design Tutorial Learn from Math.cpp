//https://codeforces.com/problemset/problem/472/A
#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define sf cin>>
#define pf cout<<
#define ll long long

void fun()
{
    ll n;
    sf n;
    if(n%2==0)
    {
        pf "4 "<<" "<<n-4;
    }
    else
    {
        pf "9 "<<n-9;
    }
    nl
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    fun();

    return 0;
}
