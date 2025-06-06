#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define sf cin>>
#define pf cout<<
#define ll long long

void fun()
{
    int n,counter=0,temp_counter=0;
    sf n;
    ll previous,variable;
    for(int i=0; i<n; i++)
    {
        sf variable;
        if(i>0 && previous<=variable)
        {
            temp_counter++;
        }
        else if(i>0 && previous>variable)
        {
            if(counter<=temp_counter)
            {
                counter=temp_counter;
            }
            temp_counter=0;
        }
        previous=variable;
    }

    if(counter<=temp_counter)
    {
        counter=temp_counter;
    }
    pf counter+1;
    nl
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    fun();

    return 0;
}
