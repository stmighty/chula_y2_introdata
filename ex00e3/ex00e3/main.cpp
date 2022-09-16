#include <iostream>
#include <set>
#include <cmath>
using namespace std;

int main()
{
    int check=1;
    int n;
    cin>>n;
    set<int> s = {};
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x>n or x<=0)
        {
            cout<<"NO"<<endl;
            check=0;
            break;
        }
        else
        {
            s.insert(x);
        }
    }
    if(check==1)
    {
        if(s.size()==n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return (0);
}
