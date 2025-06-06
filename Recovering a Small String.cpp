#include<bits/stdc++.h>
using namespace std;
void Recovering()
{
    int n,i;
    int s[27];
    s[0]=0;
    for(i=1; i<27; i++)
    {
        s[i]=i;
    }
    cin>>n;
    if(n<=28)
    {
        cout<<(char)(s[1]+96)<<(char)(s[1]+96)<<(char)(s[n-2]+96)<<"\n";
    }
    else if(n>28 && n<=53)
    {
        cout<<(char)(s[1]+96)<<(char)(s[n-26-1]+96)<<(char)(s[26]+96)<<"\n";
    }
    else if(n>=54 && n<=78)
    {
        cout<<(char)(s[n-52]+96)<<(char)(s[26]+96)<<(char)(s[26]+96)<<"\n";
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
        Recovering();
        t--;
    }

    return 0;
}
