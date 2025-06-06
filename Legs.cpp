#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long

void fun()
{
    int n,m;
    cin>>n;
    m=n%4;
    cout<<(m/2)+(n/4)<<nl;
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
