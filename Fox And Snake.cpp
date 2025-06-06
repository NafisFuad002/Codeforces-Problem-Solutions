#include<iostream>
using namespace std;
void fun()
{
    int n,m,i,j;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            if(i%4==0)
            {
                cout<<"#";
                for(j=1; j<m; j++)
                {
                    cout<<".";
                }

            }
            else
            {

                for(j=1; j<m; j++)
                {
                    cout<<".";
                }
                cout<<"#";
            }

        }
        else
        {
            for(j=1; j<=m; j++)
            {
                cout<<"#";
            }
        }
        cout<<"\n";
    }

}
int main()
{
    fun();

    return 0;
}
