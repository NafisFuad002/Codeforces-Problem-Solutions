#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,v=1,flag=1;;
    sf n;
    int arr[n-2],arr2[n];
    arr2[n-1]=-1;arr2[n-2]=-1;
    for(int i=0; i<n-2; i++)
    {
        sf arr[i];
        arr2[i]=-1;
    }
    for(int i=0; i<n-2; i++)
    {
        if(arr[i]==1)
        {
            if(arr2[i]>0)
            {
                arr2[i+1]=arr2[i];
                arr2[i+2]=arr2[i];
            }
            else if(arr2[i+1]>0)
            {
                //arr2[i+1]=arr2[i];
                arr2[i+2]=arr2[i+1];
            }
            else
            {
                arr2[i]=v;
                arr2[i+1]=v;
                arr2[i+2]=v;
                v++;
            }
        }
    }
    for(int i=0; i<n-2; i++)
    {
        if(arr[i]==0)
        {
            if((arr2[i]>0 && arr2[i+1]>0 && arr2[i+2]>0)&&(arr2[i]==arr2[i+1] && arr2[i+1]==arr2[i+2]))
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==0)
    {
        pf "NO";
    }
    else
    {
        pf "YES";
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
