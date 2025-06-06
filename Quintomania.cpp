#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,flag=1;
    sf n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
       sf arr[i];
       if(i>0 && (abs(arr[i]-arr[i-1])!=5 && abs(arr[i]-arr[i-1])!=7))
       {
           flag=0;
       }
    }
    if(flag==0)
    {
        pf "NO";
        nl
    }
    else
    {
        pf "YES";
        nl
    }
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
