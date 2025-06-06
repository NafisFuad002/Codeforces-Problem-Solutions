#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int a,b;
    bool flag=true;
    sf a>>b;
    if(a==0 && b!=0 && b%2!=0)
    {
        flag=false;
    }
    else if(a!=0 && b==0 && a%2!=0)
    {
        flag=false;
    }
    else if(a>0 && b>0 && (a+b*2)%2==1)
    {
        flag=false;
    }

    if(flag==true)
    {
        pf "YES";
    }
    else
    {
        pf "NO";
    }
    nl
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
