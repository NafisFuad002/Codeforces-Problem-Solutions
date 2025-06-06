#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define pf cout<<
#define sf cin>>
#define ll long long

void fun()
{
    string dec,word;
    sf dec>>word;
    int sum=0,prev;
    for(int i=0; i<word.length(); i++)
    {
        for(int j=0; j<dec.length(); j++)
        {
            if(word[i]==dec[j])
            {
                if(i==0)
                {
                    prev=j+1;
                }
                else
                {
                    sum+=abs(prev-j-1);
                    prev=j+1;
                }
                break;
            }
        }
    }
    pf sum;
    nl
}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    sf t;
    while(t>0)
    {
       fun();
       t--;
    }

    return 0;
}
