#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long

int rem(int a)
{
    if(a==1)
    {
        return 2;
    }
    else if(a==2 || a==3)
    {
        return 1;
    }
    else if(a==4)
    {
        return 2;
    }
    else
    {
        return 0;
    }
}
void fun()
{
    int a,moves;
    cin>>a;

    if(a<=4)
    {
        cout<<rem(a)<<nl;
    }
    else
    {
        if((a-4)/3!=0)
        {
            moves=(a-4)/3;
            moves=moves+rem(4);
            cout<<moves<<nl;
        }
        else
        {
            a=a-4;
            moves=(a/3)+2;
            cout<<moves<<nl;
        }
    }

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
