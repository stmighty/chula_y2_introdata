#include <iostream>
#include <algorithm>
#include <stack>
#include <map>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    auto it=v.begin()+1;
    for(int i=0;i<v.size();i++)
    {
        //cout<<it<<endl;
        cout<<it-v.begin()<<endl;
        cout<<*it<<endl;
        v.insert(it,1);
        cout<<it-v.begin()<<endl;
        break;
    }
    //for(int i=0;i<v.size();i++)
    //{
      //  cout<<v[i]<<endl;
    //}
}
