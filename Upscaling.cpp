#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long

void display_hash()
{
    cout<<"##";
}
void display_dot()
{
    cout<<"..";
}
void fun()
{
    int n;
    char temp,tem;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            temp='h';
        }
        else
        {
            temp='d';
        }
        tem=temp;
        for(int j=1; j<=n; j++)
        {

            if(tem=='h')
            {
                display_hash();
                tem='d';
            }
            else
            {
                display_dot();
                tem='h';
            }
        }
        cout<<nl;
        for(int j=1; j<=n; j++)
        {
            //temp=tem;
            if(temp=='h')
            {
                display_hash();
                temp='d';
            }
            else
            {
                display_dot();
                temp='h';
            }
        }
        cout<<nl;
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
