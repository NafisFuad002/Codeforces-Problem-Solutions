#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int arr[26];
    fill(arr,arr+26,0);
    int c,flag=0,n;
    string s2;
    sf n;
    sf s2;
    for(int i=0; i<n; i++)
    {
        c=(int)s2[i];
        if(arr[c-65]>0)
        {
            flag=1;
            break;
        }
        if(s2[i]!=s2[i+1] && i+1 != n)
        {
            arr[c-65]++;
        }
    }

    if(flag==1)
    {
        pf "NO";
        nl
    }
    else
    {
        pf "YES";
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
