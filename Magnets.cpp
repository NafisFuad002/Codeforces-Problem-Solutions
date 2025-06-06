#include<bits/stdc++.h>
using namespace std;
void magnets()
{
    int n,i,grp=1;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<n-1; i++)
    {
        if(arr[i]!=arr[i+1])
        {
            grp++;
        }
    }
    cout<<grp<<"\n";
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    magnets();

    return 0;
}
