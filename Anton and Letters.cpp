#include<bits/stdc++.h>
using namespace std;
void letters()
{
    vector<int>alp;
    int i=0,v,counter=0;
    while(i<26)
    {
        alp.push_back(0);
        i++;
    }

    string let;
    getline(cin,let);

    for(i=0; i<let.length(); i++)
    {
        if(let[i]>96 && let[i]<123)
        {
            v=let[i]-97;
            alp[v]++;
        }
    }
    for(i=0; i<26; i++)
    {
        if(alp[i]>0)
        {
            counter++;
        }
    }
    cout<<counter<<"\n";
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    letters();

    return 0;
}
