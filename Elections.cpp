#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    ll a,b,c,mv,counter=0;
    sf a>>b>>c;
    if(a>=b && a>=c)
    {
        mv=a;
    }
    else if(c>=b && c>=a)
    {
        mv=c;
    }
    else if(b>=a && b>=c)
    {
        mv=b;
    }
    if(mv==a)
        counter++;
    if(mv==b)
        counter++;
    if(mv==c)
        counter++;
    if(counter==3)
    {
        pf "1 1 1";
    }
    else if(counter==2)
    {
        if(mv==a)
        {
            pf "1 ";
        }
        else
        {
            pf mv-a+1<<" ";
        }
        if(mv==b)
        {
            pf "1 ";
        }
        else
        {
            pf mv-b+1<<" ";
        }
        if(mv==c)
        {
            pf "1 ";
        }
        else
        {
            pf mv-c+1<<" ";
        }
    }
    else
    {
        if(mv==a)
        {
            pf "0 ";
        }
        else
        {
            pf mv-a+1<<" ";
        }
        if(mv==b)
        {
            pf "0 ";
        }
        else
        {
            pf mv-b+1<<" ";
        }
        if(mv==c)
        {
            pf "0 ";
        }
        else
        {
            pf mv-c+1<<" ";
        }
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
