#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define sf cin>>
#define pf cout<<
#define ll long long

void fun()
{
    int d1,d2,d3,t=0;
    sf d1>>d2>>d3;
    if(d1>d2)
    {
        t=t+d2;
        if(d1+d2<d3)
        {
            t=t+d1+d2;
            if(d1<d3+d2)
            {
                t=t+d1;
            }
            else
            {
                t=t+d3+d2;
            }
        }
        else
        {
            t=t+d3;
            if(d1<d3+d2)
            {
                t=t+d1;
            }
            else
            {
                t=t+d3+d2;
            }
        }
    }

    else
    {
        t=t+d1;
        if(d1+d2<d3)
        {
            t=t+d1+d2;
            if(d2<d3+d1)
            {
                t=t+d2;
            }
            else
            {
                t=t+d3+d1;
            }
        }
        else
        {
            t=t+d3;
            if(d2<d3+d1)
            {
                t=t+d2;
            }
            else
            {
                t=t+d3+d1;
            }
        }
    }
    pf t;
    nl

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    fun();

    return 0;
}
