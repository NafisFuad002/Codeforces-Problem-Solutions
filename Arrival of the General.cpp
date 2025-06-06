#include<bits/stdc++.h>
using namespace std;
void solder()
{
    int n,i,inp,p_max,p_mini,max_value,mini_value;
    cin>>n;
    vector<int>hight;
    for(i=0; i<n; i++)
    {
        cin>>inp;
        hight.push_back(inp);
    }

    max_value=hight[0];mini_value=hight[0];
    for(i=1; i<n; i++)
    {
        if(max_value<=hight[i])
        {
            max_value=hight[i];
        }
        else if(mini_value>=hight[i])
        {
            mini_value=hight[i];
        }
    }
    int j=n-1;
    for(i=0; i<n; i++)
    {
        if(mini_value == hight[i])
        {
            p_mini=i;
        }
        if(max_value == hight[j])
        {
            p_max=j;
        }
        j--;
    }
    int sec=(p_max)+((n-1)-p_mini);
    if(p_max>p_mini)
    {
        cout<<sec-1<<"\n";
    }
    else
    {
        cout<<sec<<"\n";
    }

}
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(0);

    solder();

    return 0;
}
