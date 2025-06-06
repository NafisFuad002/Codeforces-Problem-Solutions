#include<bits/stdc++.h>
using namespace std;

#define nl "\n"

void shapes()
{
    int n,i,j,a=0,b=0,row;
    cin>>n;
    char arr[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='1')
            {
                row=i;
            }
        }
    }

    for(i=row; i>=row-1; i--)
    {
        for(j=0; j<n; j++)
        {
            if(i==row && arr[i][j]=='1')
            {
                a++;
            }
            if(i==row-1 && arr[i][j]=='1')
            {
                b++;
            }
        }
        //cout<<i<<nl;
    }//cout<<a<<" "<<b<<nl;
    if(a==b)
    {
        cout<<"SQUARE"<<nl;
    }
    else
    {
        cout<<"TRIANGLE"<<nl;
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
        shapes();
        t--;
    }

    return 0;
}
