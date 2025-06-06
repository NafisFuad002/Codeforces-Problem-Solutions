#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long

void fun()
{
    int n,counter=0;
    int index;
    cin>>n;
    string lamp;
    cin>>lamp;
    for(int i=0; i<n; i++)
    {
        if(lamp[i]=='1')
        {
            counter++;
            index=i;
        }
    }
    if(n>2)
    {
        if(counter==2 && lamp[index]!=lamp[index-1])
        {
            cout<<"YES"<<nl;
        }
        else if(counter!=2 && counter%2==0)
        {
            cout<<"YES"<<nl;
        }
        else
        {
            cout<<"NO"<<nl;
        }
    }
    else if(n<=2)
    {
        if(counter==0)
        {
            cout<<"YES"<<nl;
        }
        else
        {
            cout<<"NO"<<nl;
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
