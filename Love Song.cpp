#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define sf cin>>
#define pf cout<<
#define ll long long

void fun()
{
    int n,q,l,r;
    sf n>>q;
    string s;
    sf s;
    int arr[s.length()];
    arr[0]=s[0]-96;
    for(int i=1; i<s.length(); i++)
    {
        arr[i]=arr[i-1] + s[i]-96;
    }
    for(int i=0; i<q; i++)
    {
        sf l>>r;
        r--;
        if(l>1)
        {
            l-=2;
            pf arr[r]-arr[l];
        }
        else
        {
           pf arr[r];
        }
        nl
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    fun();

    return 0;
}
