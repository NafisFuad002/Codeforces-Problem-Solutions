#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,m1,m2;
    sf n;
    int arr[n],arr2[n];
    for(int i=0; i<n; i++)
    {
        sf arr[i];
    }
    for(int i=0; i<n; i++)
    {
        sf arr2[i];
    }
    m1=-1;
    m2=-1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<arr2[i])
        {
            swap(arr[i],arr2[i]);
        }
        if(m1<arr[i])
        {
            m1=arr[i];
        }
        if(m2<arr2[i])
        {
            m2=arr2[i];
        }
    }
    pf m1*m2;
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
