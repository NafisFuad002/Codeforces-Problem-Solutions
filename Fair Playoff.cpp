#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int arr[4];
    int m1w,m1l,m2w,m2l;
    for(int i=0; i<4; i++)
    {
        sf arr[i];
    }
    if(arr[0]>arr[1])
    {
        m1w = arr[0];
        m1l = arr[1];
    }
    else
    {
        m1w = arr[1];
        m1l = arr[0];
    }

    if(arr[2]>arr[3])
    {
        m2w = arr[2];
        m2l = arr[3];
    }
    else
    {
        m2w = arr[3];
        m2l = arr[2];
    }

    if(m1w>m2l && m2w>m1l)
    {
        pf "YES";
        nl
    }
    else
    {
        pf "NO";
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
