#include <iostream>
#include <vector>
using namespace std;


void multiple_add(vector<int> &v, int value, int position, int count)
{
 //write your code here
    /*
    int i=0;
    while(true)
    {
        v.insert(v.begin()+position,value);
        i++;
        if(i==count)
        {
            break;
        }
    }
     */
    vector<int> v2;
    for(int i=0;i<position;i++)
    {
        v2.push_back(v[i]);
    }
    for(int i=0;i<count;i++)
    {
        v2.push_back(value);
    }
    for(int i=position;i<v.size();i++)
    {
        v2.push_back(v[i]);
    }
    v=v2;
}


int main()
{
 std::ios_base::sync_with_stdio(false);
 cin.tie(0);
 int n,value,position,count;
 cin >> n >> value >> position >> count;
 vector<int> v(n);
 for (int i = 0; i < n; i++) cin >> v[i];
 multiple_add(v,value,position,count);
 cout << "After call multiple_add" << endl << "Size = " << v.size() << endl;
 for (auto &x : v) cout << x << " ";
 cout << endl;
}
