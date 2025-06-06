#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long

void fun()
{
    vector<int>num;
    int n,flag=1;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int temp;
        cin>>temp;
        num.push_back(temp);
    }
    sort(num.begin(),num.end());
    for(int i=1; i<n; i++)
    {
        if(num[i]>num[i-1])
        {
            continue;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"YES"<<nl;
    }
    else
    {
        cout<<"NO"<<nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t>0)
    {
        fun();
        t--;
    }

    return 0;
}
