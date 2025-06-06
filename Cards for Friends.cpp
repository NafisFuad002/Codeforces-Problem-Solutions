#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int w,h,n,s=1,flag=1;
    sf w>>h>>n;
    while(flag==1)
    {
        if(w%2==0)
        {
            w=w/2;
            s=s*2;
        }
        else if(h%2==0)
        {
            h=h/2;
            s=s*2;
        }
        else
        {
            flag=0;
        }
    }
    if(s>=n)
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
