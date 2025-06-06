#include<iostream>
using namespace std;
void fts()
{
    int alp[26];
    int i,j;
    for(i=0; i<26; i++)
    {
        alp[i]=0;
    }
    int sz;
    cin>>sz;
    int arr[sz];
    for(i=0; i<sz; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<sz; i++)
    {
        for(j=0; j<26; j++)
        {
            if(arr[i]==alp[j])
            {
                cout<<(char)(j+97);
                (alp[j])++;
                break;
            }
        }
    }

}
int main()
{
    int t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        fts();
        cout<<endl;
    }
    return 0;
}
