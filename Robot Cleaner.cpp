#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,m,rb,cb,rd,cd,path=0,r=1,c=1;
    sf n>>m>>rb>>cb>>rd>>cd;
    while(rb!=rd && cb!=cd)
    {
        if(rb==n)
        {
            r=-1;
        }
        if(rb==0)
        {
            r=1;
        }
        if(cb==m)
        {
            c=-1;
        }
        if(cb==0)
        {
            c=1;
        }
        rb=rb+r;
        cb=cb+c;
        path++;
    }
    pf path;
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
