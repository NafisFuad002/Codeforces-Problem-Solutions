#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,x,flag=1,f=0,sum=0,f2=0;
    sf n>>x;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int t;
        sf t;
        sum+=t;
        v.push_back(t);
        if(t==x && n==1)
        {
            flag=0;
        }
    }
    if(flag==0 || sum==x)
    {
        pf "NO";
    }
    else
    {
        sum=0;
        pf "YES";
        nl
        for(int i=n-1; i>=0; i--)
        {
            if(sum+v[i]==x)
            {
                if(f==0)
                {
                    f=v[i];
                }
                else
                {
                    f2=v[i];
                }
            }
            else
            {
                sum+=v[i];
                pf v[i]<<" ";
            }
        }
    }
    if(f!=0)
    {
        pf f<<" ";
    }
    if(f2!=0)
    {
        pf f2;
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
