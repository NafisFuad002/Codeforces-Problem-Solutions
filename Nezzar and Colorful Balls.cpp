#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    int n,temp_cal=1,maximum=1,temp,temp2;
    sf n;
    for(int i=0 ; i<n; i++)
    {
        sf temp;
        if(i>0)
        {
            if(temp==temp2)
            {
                temp_cal++;
            }
            else
            {
                if(maximum<temp_cal)
                {
                    maximum=temp_cal;
                }
                temp_cal=1;
            }
        }
        temp2=temp;
    }
    if(maximum<temp_cal)
    {
        maximum=temp_cal;
        temp_cal=1;
    }
    pf maximum;
    nl
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    sf t;
    while(t>0)
    {
        fun();
        t--;
    }

    return 0;
}
