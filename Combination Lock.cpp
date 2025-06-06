#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long

void fun()
{
    int n,counter=0;
    cin>>n;
    string org;
    string user;
    cin>>org;
    cin>>user;

    for(int i=0; i<n; i++)
    {
        if(org[i]>user[i])
        {
            int c = (org[i]-user[i]);
            if(c>5)
            {
                counter=counter+(10-c);
            }
            else
            {
                counter=counter+c;
            }
        }
        else if(org[i]<user[i])
        {
            int c = (user[i]-org[i]);
            if(c>5)
            {
                counter=counter+(10-c);
            }
            else
            {
                counter=counter+c;
            }
        }
    }
    cout<<counter<<nl;
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    fun();

    return 0;
}
