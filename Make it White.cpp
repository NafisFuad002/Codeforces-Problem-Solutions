#include<iostream>
using namespace std;
void painted()
{
    int n,i,Start,End,res;
    cin>>n;
    string nff;
    cin>>nff;
    for(i=0; i<n; i++)
    {
        if(nff[i]=='B')
        {
            Start=i;
            break;
        }
    }
    for(i=n-1; i>=Start; i--)
    {
        if(nff[i]=='B')
        {
            End=i;
            break;
        }
    }
    res=((End-Start)+1);
    cout<<res<<endl;
}
int main()
{
    int t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        painted();
    }
    return 0;
}
