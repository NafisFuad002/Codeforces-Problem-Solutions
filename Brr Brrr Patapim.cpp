//https://codeforces.com/contest/2094/problem/C
#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,m,temp;
    sf n;
    m=(2*n)+1;
    int arr[m],arr2[m];
    arr[0]=-1;arr2[0]=-1;
    arr[1]=2000;arr2[1]=2000;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            sf temp;
            arr[i+j]=temp;
            arr2[i+j]=temp;
        }
    }
    sort(arr2,arr2+m);
    for(int i=1; i<m; i++)
    {
        if(arr2[i]!=i)
        {
            arr[1]=i;
            break;
        }
    }
    //pf mis<<" ";
    for(int i=1; i<m; i++)
    {
        pf arr[i]<<" ";
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
/*
1
3
1 6 2
6 2 4
2 4 3
*/
