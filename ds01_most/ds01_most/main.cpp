#include <map>
#include <iostream>
using namespace std;

int main()
{
    map<string,int> m;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        if(m.find(x) != m.end())
        {
            m[x]+=1;
        }
        else
        {
            m[x]=1;
        }
    }
    //for (auto it=m.begin();it!=m.end();it++)
    //{
    //    cout<<it->first<<" "<<it->second<<endl;
    //}
    string result1 = m.begin()->first;
    int result2 = m.begin()->second;
    for (auto it = m.begin();it!=m.end();it++)
    {
        if(it->second>=result2)
        {
            result2=it->second;
            result1=it->first;
        }
    }
    cout<<result1<<" "<<result2<<endl;
    return (0);
}
