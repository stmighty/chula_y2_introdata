#include <iostream>
#include <cmath>
#include <string>
#include <map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int num_of_relation;
    int num_of_result;
    cin>>num_of_relation>>num_of_result;
    map<string,string> m; //son is key , father is value
    for(int i=0;i<num_of_relation;i++)
    {
        string father;
        string son;
        cin>>father>>son;
        m[son]=father;
    }
    for(int i=0;i<num_of_result;i++)
    {
        string p1,p2;
        cin>>p1>>p2;
        if(p1!=p2 and m.find(p1)!=m.end() and m.find(p2)!=m.end())
        {
            if(m.find(m[p1])!=m.end() and m.find(m[p2])!=m.end())
            {
                if(m[m[p1]]==m[m[p2]])
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return (0);
}
