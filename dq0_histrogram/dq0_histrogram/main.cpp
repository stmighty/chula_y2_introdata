#include <map>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<string,int> m;
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        if(m.find(x)==m.end())
        {
            m[x]=1;
        }
        else
        {
            m[x]+=1;
        }
    }
    for(auto &x : m)
    {
        if(x.second>1)
        {
            cout<<x.first<<" "<<x.second;
            cout<<endl;
        }
    }
    return 0;
}
