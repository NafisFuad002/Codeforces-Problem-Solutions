#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,temp,high=-1,low=99999,counter=0,ver;
    sf n;
    sf temp;
    for(int i=1; i<n; i++)
    {
        sf ver;
        if(i==1 && temp>=ver)
        {
            high=temp;
            low=ver;
        }
        else if(i==1 && temp<ver)
        {
            low=temp;
            high=ver;
        }
        if(temp!=ver && i==1)
        {
            counter++;
        }

        if(i>1 && (ver>high || ver<low))
        {
            counter++;
            if(ver>high)
            {
                high=ver;
            }
            else
            {
                low=ver;
            }
        }
    }
    pf counter;nl
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    int t=1;
    //sf t;
    while(t>0)
    {
       fun();
       t--;
    }

    return 0;
}
