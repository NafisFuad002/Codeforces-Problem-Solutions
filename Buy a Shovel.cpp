#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int k,r,a,i=1,d,c,j;
    sf k>>r;
    a=k%10;
    for(j=2; j<=10; j++)
    {
        if((k*j)%10==0)
        {
            break;
        }
    }
    if(a==0)
    {
        pf "1";
    }
    else
    {
        while(i<10 && d!=r)
        {
            c=a*i;
            d=c%10;
            if(d==r)
            {
                break;
            }
            i++;
        }
        if(d==r && i<10)
        {
            if(j>i)
            {
                pf i;
            }
            else
            {
                pf j;
            }
        }
        else
        {
            if(j<10)
            {
                pf j;
            }
            else
            {
                pf "10";
            }
        }
    }
    nl
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    int t=1;
    //sf t;
    while(t>0)
    {
       fun();
       t--;
    }

    return 0;
}
