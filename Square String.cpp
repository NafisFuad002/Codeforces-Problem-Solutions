#include<iostream>
using namespace std;
void half_word()
{
    string s;
    cin>>s;
    int x=s.length();int nn=0;
    int i,y;
    y=x/2;
    for(i=0; i<y; i++)
    {
        if(s[i]==s[i+y])
        {
            nn++;
        }
    }
    if(x%2!=0)
    {
        cout<<"NO\n";
    }
    else if(nn==y)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}
int main()
{
    int t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        half_word();
    }
    return 0;
}
