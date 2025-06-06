#include<bits/stdc++.h>
using namespace std;
void coins()
{
    int sis[3];
    int n,i,x,temp;
    for(i=0; i<3; i++)
    {
        cin>>sis[i];
    }
    cin>>n;
    sort(sis,sis+3);
    temp=sis[0];sis[0]=sis[2];sis[2]=temp;
    x=(sis[0]-sis[1])+(sis[0]-sis[2]);
    if((n-x)==0)
    {
        cout<<"YES\n";
    }
    else if((n-x)>0 && (n-x)%3==0)
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
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t>0)
    {
        coins();
        t--;
    }

    return 0;
}
