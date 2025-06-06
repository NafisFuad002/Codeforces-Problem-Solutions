#include<bits/stdc++.h>
using namespace std;
void photo()
{
    int n,m,mul,i,Flag=0;
    cin>>n>>m;
    mul=n*m;
    char arr[mul];
    for(i=0; i<mul; i++)
    {
        cin>>arr[i];
        if(arr[i]=='C' || arr[i]=='M' || arr[i]=='Y')
        {
            Flag++;
        }
    }
    if(Flag==0)
    {
        cout<<"#Black&White\n";
    }
    else
    {
        cout<<"#Color\n";
    }
}
int main()
{
    photo();
    return 0;
}
