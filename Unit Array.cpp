#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,sum=0,mul=1,temp,res;
    sf n;
    for(int i=1; i<=n; i++)
    {
        sf temp;
        sum+=temp;
        mul*=temp;
    }
    if(sum>=0 && mul==1)
    {
        pf "0";
    }
    else if(sum>=0 && mul==-1)
    {
        pf "1";
    }
    else if(sum<0 && mul==1)
    {
        res=abs(sum);
        res=ceil(res/2.0);
        if(res%2==0)
        {
            pf res;
        }
        else
        {
            pf res+1;
        }
    }
    else
    {
        res=abs(sum);
        res=ceil(res/2.0);
        if(res%2==0)
        {
            pf res+1;
        }
        else
        {
            pf res;
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
