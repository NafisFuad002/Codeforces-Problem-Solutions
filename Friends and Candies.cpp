#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,counter=0,sum=0;
    sf n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        sf arr[i];
        sum+=arr[i];
    }
    if(sum%n!=0)
    {
        pf "-1";
    }
    else
    {
        ll avg=sum/n;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>avg)
            {
                counter++;
            }
        }
        pf counter;
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
