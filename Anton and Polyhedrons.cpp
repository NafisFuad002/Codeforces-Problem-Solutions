#include<bits/stdc++.h>
using namespace std;
void polyhedrons()
{
    int i,n,sum=0;
    string num;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>num;
        if(num=="Tetrahedron")sum+=4;
        else if(num=="Cube")sum+=6;
        else if(num=="Octahedron")sum+=8;
        else if(num=="Dodecahedron")sum+=12;
        else if(num=="Icosahedron")sum+=20;
    }
    cout<<sum<<"\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    polyhedrons();

    return 0;
}
