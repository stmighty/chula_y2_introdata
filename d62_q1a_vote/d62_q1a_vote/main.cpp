#include <cmath>
#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;
int main()
{
    map<string,int> m;
    int ballot,k;
    cin>>ballot;
    cin>>k;
    for(int i=0;i<ballot;i++)
    {
        string name;
        cin>>name;
        if(m.find(name)==m.end())
        {
            m[name]=1;
        }
        else
        {
            m[name]+=1;
        }
    }
    
    // build reverse map
    map<int,vector<string>> m2;              // first is vote(int) second is vector of name(vector of string)
    for(auto it=m.begin();it!=m.end();it++)  // first is name(string), second is vote(int)
    {
        if(m2.find(it->second)==m2.end())
        {
            m2[it->second]=vector<string> {it->first};
        }
        else
        {
            m2[it->second].push_back(it->first);
        }
    }
    
    //test reverse map
    /*
    for(auto it=m2.begin();it!=m2.end();it++)
    {
        cout<<it->first<<" ";
        for (int j=0;j<it->second.size();j++)
        {
            cout<<it->second[j]<<" ";
        }
        cout<<endl;
    }
    */
    /*
    int result=0;
    int i = 0;
    for(auto it=m2.begin();it!=m2.end();it++)   //** start with end not begin
    {
        result=it->first;
        i++;
        if(m2.size()-i<=k)
        {
            break;
        }
    */
    auto it=m2.end();   //why canot m2.end()-1
    int i=0;
    int result=0;
    while(true)
    {
        it--;
        result=it->first;
        i+=(it->second).size();
        if(i>=k)
        {
            break;
        }
        if(it==m2.begin())
        {
            break;
        }
    }
    
    cout<<result<<endl;
    return (0);
}
