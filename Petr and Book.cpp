//https://codeforces.com/problemset/problem/139/A
#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,sum=0,d=0,sum2=0,m,flag=0;
    sf n;
    int arr[7];
    for(int i=0; i<7; i++)
    {
        sf arr[i];
        sum+=arr[i];
        if(sum>=n && flag==0)
        {
            d=i+1;
            flag=1;
        }
    }
    if(n%sum==0)
    {
        for(int i=6; i>=0; i--)
        {
            if(arr[i]!=0)
            {
                d=i+1;
                break;
            }
        }
    }
    else if(d==0)
    {
        flag=0;
        m=n%sum;
        for(int i=0; i<7; i++)
        {
            sum2+=arr[i];
            if(sum2>=m && flag==0)
            {
                d=i+1;
                flag=1;
            }
        }
    }
    pf d;
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
