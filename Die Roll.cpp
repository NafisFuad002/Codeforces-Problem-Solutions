//https://codeforces.com/problemset/problem/9/A
#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define sf cin>>
#define pf cout<<
#define ll long long

void fun()
{
    int a,b,x;
    sf a>>b;
    x=max(a,b);
    x=6-x+1;
    if(x==6)
    {
        pf "1/1";
    }
    else if(x==5)
    {
        pf "5/6";
    }
    else if(x==4)
    {
        pf "2/3";
    }
    else if(x==3)
    {
        pf "1/2";
    }
    else if(x==2)
    {
        pf "1/3";
    }
    else if(x==1)
    {
        pf "1/6";
    }
    else
    {
        pf "0/1";
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
