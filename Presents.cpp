#include<bits/stdc++.h>
using namespace std;
void presents()
{
    int n,i;
    cin>>n;
    int arr[n];
    int arr2[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        arr2[arr[i]-1]=i+1;
    }
    for(i=0; i<n; i++)
    {
        cout<<arr2[i]<<" ";
    }
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    presents();

    return 0;
}
