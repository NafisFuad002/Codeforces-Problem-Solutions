#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,sum=0,sum2=0,m=1;
    sf n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        sf arr[i];
    }
    for(int i=0,j=n-1; i<=j; )
    {
        if(m%2!=0)
        {
            if(arr[i]>arr[j])
            {
                sum+=arr[i];
                i++;
            }
            else
            {
                sum+=arr[j];
                j--;
            }
        }
        else
        {
            if(arr[i]>arr[j])
            {
                sum2+=arr[i];
                i++;
            }
            else
            {
                sum2+=arr[j];
                j--;
            }
        }
        m++;
    }
    pf sum<<" "<<sum2;
    nl
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    int t=1;
    //sf t;
    while(t>0)
    {
       fun();
       t--;
    }

    return 0;
}
