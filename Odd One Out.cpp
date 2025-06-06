//https://codeforces.com/problemset/problem/1915/A
#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int a,b,c;
    sf a>>b>>c;
    if(a==b){pf c;}
    else if(b==c){pf a;}
    else{pf b;}nl
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
