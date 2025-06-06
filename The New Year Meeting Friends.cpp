#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long

void fun()
{
    vector<int> fnds;
    int x;
    for(int i=1; i<=3; i++)
    {
        cin>>x;
        fnds.push_back(x);
    }
    sort(fnds.begin(),fnds.end());
    cout<<(fnds[2]-fnds[1])+(fnds[1]-fnds[0])<<nl;
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    fun();

    return 0;
}
