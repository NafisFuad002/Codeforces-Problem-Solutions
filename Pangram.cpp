#include<iostream>
using namespace std;
void pangram()
{
    int i,alp,n,counter=0;
    cin>>n;
    string x;
    cin>>x;
    for(alp=65; alp<91; alp++)
    {
        for(i=0; i<x.length(); i++)
        {
            x[i]=toupper(x[i]);
            if(x[i]==alp)
            {
                counter++;
                break;
            }
        }
    }
    if(counter==26)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main()
{
    pangram();
    return 0;
}
