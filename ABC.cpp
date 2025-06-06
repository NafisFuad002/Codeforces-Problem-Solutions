#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n;
    string s;
    sf n;
    sf s;
    if(n==1)
    {
        pf "Yes";nl
    }
    else if(n==2 && s[0]!=s[1])
    {
        pf "Yes";nl
    }
    else
    {
        pf "No";nl
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
