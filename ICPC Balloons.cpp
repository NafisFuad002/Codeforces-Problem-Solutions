#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long

void fun()
{
    char alp[26];
    int n,i,sum=0;
    for(i=0; i<26; i++)
    {
        alp[i]=0;
    }
    cin>>n;
    string arr;

    cin>>arr;
    for(i=0; i<n; i++)
    {
        int c=(int)arr[i];
        c=c-65;
        alp[c]++;
    }
    for(i=0; i<26; i++)
    {
        if(alp[i]==1)
        {
            sum=sum+2;
        }
        else if(alp[i]>1)
        {
            sum=sum+alp[i]+1;
        }
    }
    cout<<sum<<nl;
    //cout<<arr;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        fun();
    }

    return 0;
}
