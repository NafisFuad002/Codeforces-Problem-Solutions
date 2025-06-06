#include<bits/stdc++.h>
using namespace std;
void dollar()
{
    int n,ans,x,y,z,m,k;
    cin>>n;
    x=n/100;
    n=n-(100*x);
    y=n/20;
    n=n-(20*y);
    z=n/10;
    n=n-(10*z);
    m=n/5;
    n=n-(m*5);
    k=n/1;

    ans=x+y+z+m+k;
    cout<<ans<<"\n";
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    dollar();

    return 0;
}
