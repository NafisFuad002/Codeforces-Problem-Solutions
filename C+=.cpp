//https://codeforces.com/problemset/problem/1368/A
#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long

void fun()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b)
    {
        swap(a,b);
    }

    int counter=0,temp;

    while(b<=c)
    {
        temp=a+b;
        a=b;
        b=temp;
        counter++;
    }

    cout<<counter<<nl;
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
