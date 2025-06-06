#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,n1,n2,n1I,n2I,counter1=0,counter2=0;
    sf n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        sf arr[i];
        if(i==0)
        {
            n1=arr[0];
            n1I=0;
            counter1++;
        }
        else if(arr[i]!=n1)
        {
            n2=arr[i];
            n2I=i;
            counter2++;
        }
        else
        {
            counter1++;
        }
    }
    if(counter1==1)
    {
        pf n1I+1;
        nl
    }
    else
    {
        pf n2I+1;
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
