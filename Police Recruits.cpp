/* sutu te akta variable nibo jar man 0;
ar por proti index ar sathe oi variable ta jog korbo.
variable ar man kokhono 0 ar kom hobe naa.
jodi hoy taholei bujhte hobe crime hoyese.
*/
#include<bits/stdc++.h>
using namespace std;
void police_req()
{
    int n,i,Crime_dector=0,sum=0;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<n; i++)
    {
        sum=sum + arr[i];
        if(sum<0)
        {
            Crime_dector++;
            sum=0;
        }
    }
    cout<<Crime_dector<<"\n";
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    police_req();

    return 0;
}
