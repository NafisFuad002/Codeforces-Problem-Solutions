#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long

void fun()
{
    int arr[4];
    arr[0]=0;
    int key;
    cin>>key;
    cin>>arr[1]>>arr[2]>>arr[3];

    int temp;
    temp=arr[key];

    if(temp==0)
    {
        cout<<"NO"<<nl;
    }
    else
    {
        temp=arr[temp];
        if(temp==0)
        {
            cout<<"NO"<<nl;
        }
        else
        {
            cout<<"YES"<<nl;
        }
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
