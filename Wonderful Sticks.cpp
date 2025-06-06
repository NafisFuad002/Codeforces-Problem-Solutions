#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,s=1,b,x,sum=0;
    sf n;
    b=n;
    int arr[n];
    int m=0;
    string st;
    sf st;
    x=(n*(n+1))/2;
    for(int i=st.length()-1; i>=0; i--)
    {
        if(st[i]=='>')
        {
            arr[m]=b;
            sum+=b;
            b--;m++;
        }
        else if(st[i]=='<')
        {
            arr[m]=s;
            sum+=s;
            s++;m++;
        }
    }
    arr[m]=x-sum;
    for(int i=n-1; i>=0; i--)
    {
        pf arr[i]<<" ";
    }
    nl
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
