#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long

void fun()
{
    int points=0;

    for(int i=1; i<=10; i++)
    {
        for(int j=1; j<=10; j++)
        {
            char c;
            cin>>c;
            if(c=='X')
            {
                if(i==1 || i==10 || j==1 || j==10)
                {
                    points=points+1;
                }
                else if((i==2 || i==9) && (j!=1 && j!=10))
                {
                    points=points+2;
                }
                else if((j==2 || j==9) && (i!=1 && i!=10))
                {
                    points=points+2;
                }
                else if((i==3 || i==8) && (j!=1 && j!=2 && j!=9 && j!=10))
                {
                    points=points+3;
                }
                else if((j==3 || j==8) && (i!=1 && i!=2 && i!=9 && i!=10))
                {
                    points=points+3;
                }
                else if((i==4 || i==7) && (j>3 && j<8))
                {
                    points=points+4;
                }
                else if((j==4 || j==7) && (i>3 && i<8))
                {
                    points=points+4;
                }
                else if((i==5 && j==5) || (i==5 && j==6) || (i==6 && j==5) || (i==6 && j==6))
                {
                    points=points+5;
                }
            }
        }
    }

    cout<<points<<nl;
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
