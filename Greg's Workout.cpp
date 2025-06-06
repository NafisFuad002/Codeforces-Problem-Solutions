#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define sf cin>>
#define pf cout<<
#define ll long long

void fun()
{
    int n;
    sf n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        sf arr[i];
    }

    int chest=0,bic=0,bac=0;
    for(int i=0; i<n; i=i+3)
    {
        chest=chest+arr[i];
    }
    for(int i=1; i<n; i=i+3)
    {
        bic=bic+arr[i];
    }
    for(int i=2; i<n; i=i+3)
    {
        bac=bac+arr[i];
    }
    if(chest>=bic && chest>= bac)
    {
        pf "chest";
    }
    else if(bic>=chest && bic>= bac)
    {
        pf "biceps";
    }
    else if(bac>=chest && bac>= bic)
    {
        pf "back";
    }
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    fun();

    return 0;
}
