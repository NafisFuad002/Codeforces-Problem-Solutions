#include<bits/stdc++.h>
using namespace std;
void drinks()
{
    int n,i,sum=0;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<< setprecision(12) <<(double)sum/n;
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    drinks();

    return 0;
}
