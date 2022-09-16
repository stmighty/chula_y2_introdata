#include <set>
#include <iostream>
using namespace std;

int main()
{
    
    int m;
    int n;
    set<int> s1={};
    set<int> s2={};
    set<int> result;
    
    cin>>m>>n;
    
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        s1.insert(x);
    }
    for(int i=0;i<n;i++)
    {
        int y;
        cin>>y;
        s2.insert(y);
    }
    
    for(auto it=s1.begin();it!=s1.end();it++)
    {
        if(s2.find(*it)!=s2.end())
        {
            result.insert(*it);
        }
    }
    for(auto it=result.begin();it!=result.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return (0);
}

/*
set<int> s1;
set<int> s2;

s1.insert(1);
s1.insert(2);
s1.insert(3);
s1.insert(4);

s2.insert(1);
s2.insert(6);
s2.insert(3);
s2.insert(0);

set<int> intersect;
set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
                 inserter(intersect, intersect.begin()));

for(auto it=intersect.begin();it!=intersect.end();it++)
{
    cout<<*it<<endl;
}
 
return 0;
 */
