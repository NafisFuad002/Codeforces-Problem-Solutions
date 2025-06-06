#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long

void fun()
{
    string clock;
    cin>>clock;
    string m;
    m[0]=clock[3];
    m[1]=clock[4];

    int hour=stoi(clock);
    int minu=stoi(m);

    if(hour==0)
    {
        if(minu<10)
        {
            cout<<"12:"<<"0"<<minu<<" AM"<<nl;
        }
        else
        {
            cout<<"12:"<<minu<<" AM"<<nl;
        }
    }
    else if(hour>=1 && hour<= 12)
    {
        if(hour<12)
        {
            if(hour<10 && minu<10)
            {
                cout<<"0"<<hour<<":"<<"0"<<minu<<" AM"<<nl;
            }
            else if(hour>9 && minu<10)
            {
                cout<<hour<<":"<<"0"<<minu<<" AM"<<nl;
            }
            else if(hour<10 && minu>9)
            {
                cout<<"0"<<hour<<":"<<minu<<" AM"<<nl;
            }
            else
            {
                cout<<hour<<":"<<minu<<" AM"<<nl;
            }
        }
        else
        {
            if(hour<10 && minu<10)
            {
                cout<<"0"<<hour<<":"<<"0"<<minu<<" PM"<<nl;
            }
            else if(hour>9 && minu<10)

            {
                cout<<hour<<":"<<"0"<<minu<<" PM"<<nl;
            }
            else if(hour<10 && minu>9)
            {
                cout<<"0"<<hour<<":"<<minu<<" PM"<<nl;
            }
            else
            {
                cout<<hour<<":"<<minu<<" PM"<<nl;
            }
        }
    }
    else
    {
        hour=hour-12;
        if(hour<10 && minu<10)
        {
            cout<<"0"<<hour<<":"<<"0"<<minu<<" PM"<<nl;
        }
        else if(hour>9 && minu<10)
        {
            cout<<hour<<":"<<"0"<<minu<<" PM"<<nl;
        }
        else if(hour<10 && minu>9)
        {
            cout<<"0"<<hour<<":"<<minu<<" PM"<<nl;
        }
        else
        {
            cout<<hour<<":"<<minu<<" PM"<<nl;
        }
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
