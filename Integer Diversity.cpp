//https://codeforces.com/problemset/problem/1616/A
#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,temp,sum=0;
    sf n;
    int arr[101];
    fill(arr,arr+101,0);

    int arr2[101];
    fill(arr2,arr2+101,0);
    //pf arr[100]; nl

    for(int i=1; i<=n; i++)
    {
        sf temp;
        if(temp>=0)
        {
            arr[temp]++;
        }
        else
        {
            temp*=-1;
            arr2[temp]++;
        }
    }
    for(int i=1; i<=100; i++)
    {
        if(arr[i]>1)
        {
            sum+=2;
        }
        else if(arr[i]==1 && arr2[i]>0)
        {
            sum+=2;
        }
        else if(arr[i]==1 && arr2[i]==0)
        {
            sum+=1;
        }
        else if(arr[i]==0 && arr2[i]==1)
        {
            sum+=1;
        }
        else if(arr[i]==0 && arr2[i]>1)
        {
            sum+=2;
        }
    }
    if(arr[0]>0)
    {
        sum++;
    }
    pf sum;
    //pf arr[100];
    //nl
    //pf arr2[100];
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
8
100 -100 100 -100 0 0 0 99
*/
