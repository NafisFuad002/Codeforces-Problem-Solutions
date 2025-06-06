#include<bits/stdc++.h>
using namespace std;
void Fence()
{
    int n,h,i,sum=0;
    cin>>n>>h;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>h)
        {
            sum=sum+2;
        }
        else
        {
            sum=sum+1;
        }
    }
    cout<<sum<<"\n";

}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    Fence();

    return 0;
}
