#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    ll n,sum=0,x;
    sf n;
    ll arr[n];
    for(int i=0; i<n; i++)
    {
        sf arr[i];
        sum+=arr[i];
    }
    ll avg=sum/n;
    if(sum%n!=0)
    {
        pf "NO";
    }
    else
    {
        for(int i=1; i<n-1; i++)
        {
            if(arr[i-1]>avg)
            {
                x=arr[i-1]-avg;
                arr[i-1]-=x;
                arr[i+1]+=x;
            }
            else if(arr[i-1]<avg)
            {
                x=avg-arr[i-1];
                arr[i-1]+=x;
                arr[i+1]-=x;
                /*if(arr[i+1]<0)
                {
                    pf "NO";
                    break;
                }*/
            }
        }
        if(arr[n-1]==avg && arr[n-2]==avg && arr[n-3]==avg)
        {
            pf "YES";
        }
        else
        {
            pf "NO";
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
