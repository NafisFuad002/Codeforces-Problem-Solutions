#include<bits/stdc++.h>
using namespace std;
void drinks()
{
    int L,a,b,i,m,j,flag=1;
    cin>>L;
    cin>>a;
    vector<int>aL;
    for(i=0; i<a; i++)
    {
        cin>>m;
        aL.push_back(m);
    }
    cin>>b;
    //vector<int>bL;
    for(i=0; i<b; i++)
    {
        cin>>m;
        aL.push_back(m);
    }
    int k=a+b,u=k-1;
    sort(aL.begin(),aL.end());
    for(i=0; i<u; i++)
    {
        if(aL[i]==aL[i+1])
        {
            aL.erase(aL.begin()+i+1);
            u--;
            i--;
        }
        else if(aL[i]!=i+1)
        {
            flag=0;
            break;
        }
    }
    if(a==0 && b==0)
    {
        cout<<"Oh, my keyboard!";
    }
    else if(flag==1 && aL[L-1]==L)
    {
        cout<<"I become the guy.";
    }
    else
    {
        cout<<"Oh, my keyboard!";
    }

}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    drinks();

    return 0;
}
