#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,j=0;
    sf n;
    int arr[n];
    int dup[n];
    for(int i=0; i<n; i++)
    {
        sf arr[i];
    }
    sort(arr,arr+n);
    pf arr[0]<<" ";
    for(int i=1; i<n; i++)
    {
        if(arr[i]==arr[i-1])
        {
            dup[j]=arr[i];
            j++;
        }
        else
        {
            pf arr[i]<<" ";
        }
    }
    for(int i=0; i<j; i++)
    {
        pf dup[i]<<" ";
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
