#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define sf cin>>
#define pf cout<<
#define ll long long

void fun()
{
    int avg,mid,x;
    sf avg>>mid;

    if(avg==0 && mid==0)
    {
        pf "2";
        nl
        pf "-1 1";
    }
    else if(avg!=0 && mid==0)
    {
        int a=avg*3;
        pf "3";
        nl
        pf "0 0 "<<a;
    }
    else if(avg==0 && mid!=0)
    {
        int a=(3*avg)-mid-mid;
        pf "3";
        nl
        pf mid<<" "<<mid<<" "<<a;
    }
    else if(avg>0 && mid>0)
    {
        int a=(3*avg)-mid-mid;
        pf "3";
        nl
        pf mid<<" "<<mid<<" "<<a;
    }
    else if(avg<0 && mid>0)
    {
        int a=(3*abs(avg))+mid+mid;
        pf "3";
        nl
        pf mid<<" "<<mid<<" "<<(a)*(-1);
    }
    else if(avg>0 && mid<0)
    {
        int a=avg*3-mid;
        pf "3";
        nl
        pf mid<<" "<<mid<<" "<<a-mid;
    }
    else if(avg<0 && mid<0)
    {
        int a=(3*avg)-mid-mid;
        pf "3";
        nl
        pf mid<<" "<<mid<<" "<<a;
    }
    nl
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    fun();

    return 0;
}
