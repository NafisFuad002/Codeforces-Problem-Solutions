#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define sf cin>>
#define pf cout<<
#define ll long long

void fun()
{
    int n,counter=0;
    string s;
    sf s;
    for(int i=0; i<s.length(); i++)
    {
        if((int)s[i]>=48 && (int)s[i]<=57)
        {
            n=(int)s[i];
            if(n%2==1)
            {
                counter++;
            }
        }
        else if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            counter++;
        }
    }
    pf counter;nl
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    fun();

    return 0;
}
