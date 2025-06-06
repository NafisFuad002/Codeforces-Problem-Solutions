#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long

void fun()
{
    int n,counter=0,save=-1;
    cin>>n;
    vector<int> a;
    for(int i=1; i<=n; i++)
    {
        int c;
        cin>>c;
        a.push_back(c);
    }
    sort(a.begin(),a.end());

    for(int i=0; i<n-1; i++)
    {
        if(a[i]==a[i+1])
        {
            counter++;
        }
        else
        {
            counter=0;
        }
        if(counter>=2)
        {
            save=a[i];
        }
    }
    cout<<save<<nl;
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
