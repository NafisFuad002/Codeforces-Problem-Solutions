#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define sf cin>>
#define pf cout<<
#define ll long long

void fun()
{
    int n,in1,in2,diff,pre;
    sf n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        sf arr[i];
    }

    in1=n-1;
    in2=0;
    diff=abs(arr[in1]-arr[in2]);

    for(int i=1; i<n; i++)
    {
        pre=abs(arr[i-1]-arr[i]);
        if(diff>pre)
        {
            in1=i-1;
            in2=i;
            diff=pre;
        }
    }
    pf in1+1<<" "<<in2+1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    fun();

    return 0;
}
