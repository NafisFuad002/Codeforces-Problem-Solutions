#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,k;
    sf n>>k;
    int arr[n],arr2[n];
    for(int i=0; i<n; i++)
    {
        sf arr[i];
    }
    for(int i=0; i<n; i++)
    {
        sf arr2[i];
    }
    //sorting
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
                swap(arr2[i],arr2[j]);
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]<=k)
        {
            k+=arr2[i];
        }
        else
        {
            break;
        }
    }
    pf k;
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
