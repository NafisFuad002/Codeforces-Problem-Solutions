#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long
#define py pf "YES"; nl
#define pn pf "NO"; nl

void fun()
{
    int r,c;
    sf r>>c;
    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=c; j++)
        {
            if(r%2==0 && i+1==r)
            {
                pf "0";
            }
            else if(r%2==0 && i==r && j%2==1)
            {
                pf "1";
            }
            else if(r%2==0 && i==r && j%2==0)
            {
                pf "0";
            }

            else if(i==1 && j%2==1)
            {
                pf "1";
            }
            else if(i==1 && j%2==0)
            {
                pf "0";
            }
            else if(i%2==0)
            {
                pf "0";
            }
            else if(i==r && j%2==1)
            {
                pf "1";
            }
            else if(i%2==1 && i!=r)
            {
                if(j==1 || j==c)
                {
                    pf "1";
                }
                else
                {
                    pf "0";
                }
            }
            else
            {
                pf "0";
            }
        }
        nl
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
